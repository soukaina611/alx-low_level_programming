#include "main.h"
/*#include <errno.h>*/

/**
 *read_textfile - func that read & write specific letters given in stdout
 *@filename: the file given to read
 *@letters: the nb of Letters to be reaad & print
 *Return: 0 if file is not created (null) or nb of letters readed & printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int create_f;
ssize_t write_file;
char *storage;
ssize_t read_file;

create_f = open(filename, O_RDONLY);

if (create_f == -1)
{
return (0);
}
storage = malloc(sizeof(char) * letters);

read_file = read(create_f, storage, letters);

write_file = write(STDOUT_FILENO, storage, read_file);

free(storage);

close(create_f);
return (write_file);
}

