#include "main.h"

/**
 *_strspn - function gets the length of a prefix substring
 *@s1:input
 *@s2:input to search
 *Return: integer value (length)
*/

unsigned int _strspn(char *s1, char *s2)
{
unsigned int length = 0;
int index;

while (*s1)
{
for (index = 0; s2[index] ; index++)
if (*s1 == s2[index])
{
length++;
break;
}
else if (s2[index + 1] == '\0')
{
return (length);
}
s1++;
}
return (length);
}
