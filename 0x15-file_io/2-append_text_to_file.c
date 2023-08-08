#include "main.h"
/**
 *append_text_to_file - func that include another text at the end of filename
 *@filename:the name given to the file we want to add text
 *@text_content: the container of text to add in the end
 *Return: if program fails print -1 else 1 means success program
 */

int append_text_to_file(const char *filename, char *text_content)
{
int length = 0;
int write_file, create_file;

if (filename == NULL)
{
return (-1);
}
create_file = open(filename, O_RDWR | O_APPEND);

if (text_content != NULL)
{
for (length = 0; text_content[length];)
{
length = length + 1;
}
}

write_file = write(create_file, text_content, length);

if (write_file == -1 || create_file == -1)
{
return (-1);
}

close(create_file);

return (1);
}
