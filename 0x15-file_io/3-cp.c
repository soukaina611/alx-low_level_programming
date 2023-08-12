#include "main.h"
#define usage_error "Usage: cp file_from file_to\n"
#define noread_error "Error: Can't read from file %s\n"
#define nowrite_error "Error: Can't write to %s\n"
#define file_permissions (S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH)
#define cl_err "Error: Can't close fd %d\n"

void closef(int f);

/**
 *closef - funct to close open file
 *@f:The file we want to close
 */

void closef(int f)
{
int cl;
cl = close(f);

if (cl == -1)
{
dprintf(STDERR_FILENO, cl_err, f);
exit(100);
}
}


/**
*main - funct exec prog
*@argsc:the counter of args
*@argsv:the vecto args
*Return: if there is an error 0 else 1 means success
*/
int main(int argsc, char *argsv[])
{
int src;
int dest;
char *st;
int rd, wr;

src = open(argsv[1], O_RDONLY);
st = malloc(sizeof(char) * 1024);
if (st == NULL)
{
dprintf(STDERR_FILENO, nowrite_error, argsv[2]);
exit(99);
}
rd = read(src, st, 1024);
dest = open(argsv[2], O_CREAT | O_WRONLY | O_TRUNC, file_permissions);
if (argsc != 3)
{
dprintf(STDERR_FILENO, usage_error);
exit(97);
}

do {
if (rd == -1 || src == -1)
{
dprintf(STDERR_FILENO, noread_error, argsv[1]);
free(st);
exit(98);
}
wr = write(dest, st, rd);
if (dest == -1 || wr == -1)
{
dprintf(STDERR_FILENO, nowrite_error, argsv[2]);
free(st);
exit(99);
}
rd = read(src, st, 1024);
dest = open(argsv[2], O_WRONLY | O_APPEND);
} while (rd > 0);
free(st);
closef(src);
closef(dest);

return (0);
}
