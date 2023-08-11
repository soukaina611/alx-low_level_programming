#include "main.h"
#define usage_error "Usage: cp file_from file_to\n"
#define noread_error "Error: Can't read from file %s\n"
#define nowrite_error "Error: Can't write to %s\n"
#define file_permissions (S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH)
#define closefile_error "Error: Can't close fd %d\n"

/**
*main - funct exec prog
*@argsc:the counter of args
*@argsv:the vecto args
*Return: if there is an error 0 else 1 means success
*/
int main(int argsc, char *argsv[])
{
int file_source;
int file_dest;
char *storage;
int read_file, write_file;

file_source = open(argsv[1], O_RDONLY);
storage = malloc(sizeof(char) * 1024);
if (storage == NULL)
{
dprintf(STDERR_FILENO, nowrite_error, argsv[2]);
exit(99);
}
read_file = read(file_source, storage, 1024);

file_dest = open(argsv[2], O_CREAT | O_WRONLY | O_TRUNC, file_permissions);

do {

if (read_file == -1 || file_source == -1)
{
dprintf(STDERR_FILENO, noread_error, argsv[1]);
exit(98);
}

if (argsc != 3)
{
dprintf(STDERR_FILENO, usage_error);
exit(97);
}

write_file = write(file_dest, storage, read_file);

if (file_dest == -1 || write_file == -1)
{
dprintf(STDERR_FILENO, nowrite_error, argsv[2]);
free(storage);

exit(99);
}
read_file = read(file_source, storage, 1024);
file_dest = open(argsv[2], O_WRONLY | O_APPEND);
} while (read_file > 0);
free(storage);
file_source = close(file_source);
file_dest = close(file_dest);
if (file_source)
{
dprintf(STDERR_FILENO, closefile_error, file_source);
exit(100);
}
if (file_dest)
{
dprintf(STDERR_FILENO, closefile_error, file_source);
exit(100);
}
return (0);
}
