#include "main.h"
#define usage_error "Usage: cp file_from file_to\n"
#define nowrite_error "Error: Can't write to %s\n"
#define file_permissions (S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH)
#define closefile_error "Error: Can't close fd %d\n"
#define noread_error "Error: Can't read from file %s\n"
/**
*main - funct exec prog
*@argumentc:the counter of args
*@argumentv:the vecto args
*Return: if there is an error 0 else 1 means success
*/
int main(int argumentc, char *argumentv[])
{
int file_source = 0;
int file_dest = 0;
char *storage;
ssize_t read_file;

file_source = open(argumentv[1], O_RDONLY);
if (file_source == -1)
{
dprintf(STDERR_FILENO, noread_error, argumentv[1]);
exit(98);
}

if (argumentc != 3)
{
dprintf(STDERR_FILENO, usage_error);
exit(97);
}
file_dest = open(argumentv[2], O_CREAT | O_RDONLY | O_TRUNC, file_permissions);
if (file_dest == -1)
{
dprintf(STDERR_FILENO, nowrite_error, argumentv[2]);
exit(98);
}
storage = malloc(sizeof(char) * 1024);
read_file = read(file_source, storage, 1024);
if (read_file == -1)
{
dprintf(STDERR_FILENO, noread_error, argumentv[1]);
exit(98);
}
while (read_file > 0)
{
if (write(file_dest, storage, read_file) != read_file){
dprintf(STDERR_FILENO, nowrite_error, argumentv[2]);
exit(99);
}
}
file_source = close(file_source);
file_dest = close(file_dest);
if (file_dest)
{
dprintf(STDERR_FILENO, closefile_error, file_source);
exit(100);
}
if (file_source)
{
dprintf(STDERR_FILENO, closefile_error, file_source);
exit(100);
}

return (1);
}

