#include "main.h"
/**
 *create_file - func that make a new file.
 *@filename: the name file that we want to create in our directory
 *@text_content: the container text to wwrite
 *Return: 0 if it is an error else 1 means success
 */
int create_file(const char *filename, char *text_content)
{
int length = 0;
int write_file, create_f;

if (filename == NULL)
{
return (-1);
}
create_f = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

if (text_content != NULL)
{
for (length = 0; text_content[length];)
{
length = length + 1;
}
}

write_file = write(create_f, text_content, length);

if (write_file == -1 || create_f == -1)
{
return (-1);
}

close(create_f);

return (1);
}
