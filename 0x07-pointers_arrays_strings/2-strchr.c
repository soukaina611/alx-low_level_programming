#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *@s:input string
 *@character: character to find
 *Return: 0 means success
*/

char *_strchr(char *s, char character)
{
int index = 0;

for (; s[index] >= '\0'; index++)
{
if (s[index] == character)
{
return (&s[index]);
}
}
return (0);
}
