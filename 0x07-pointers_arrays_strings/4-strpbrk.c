#include "main.h"

/**
 *_strpbrk - function searches string for any of a set of bytes
 *@s1:string where we search
 *@s2:string to search
 *Return: 0 success
*/

char *_strpbrk(char *s1, char *s2)
{
int j;

while (*s1)
{
for (j = 0 ; s2[j] ; j++)
{
if (*s1 == s2[j])
{
return (s1);
}
}
s1++;
}
return ('\0');
}

