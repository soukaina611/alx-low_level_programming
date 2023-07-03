#include "main.h"

/**
 *_memset - function fills memory with a constant byte
 *@s1: starting adress to fill
 *@s2: the value we want
 *@number: number of bytes
 *Return: new values for n bytes
*/

char *_memset(char *s1, char s2, unsigned int number)
{
int i = 0;

for (; number > 0 ; i++)
{
s1[i] = s2;
number--;
}
return (s1);
}
