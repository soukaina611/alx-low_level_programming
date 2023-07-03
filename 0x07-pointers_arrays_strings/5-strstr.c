#include "main.h"

/**
 *_strstr - function that locates a substring
 *@s1: input
 *@s2: input
 *Return:pointer to the begining of string or 0
*/

char *_strstr(char *s1, char *s2)
{
for (; *s1 != '\0'; s1++)
{
char *string1 = s1;
char *string2 = s2;

while (*string1 == *string2 && *string2 != '\0')
{
string1++;
string2++;
}
if (*string2 == '\0')
return (s1);
}
return (0);
}

