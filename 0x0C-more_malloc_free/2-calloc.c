#include "main.h"

/**
 *_memset - function fills memory with const byte
 *@string:pointer to put const
 *@b:The constant
 *@n: maximum bytes
 *Return: string
*/

char *_memset(char *string, char b, unsigned int n)
{
char *pt = string;

while (n--)
{
*string++ = b;
}
return (pt);
}

/**
 *_calloc - function  allocates memory for an array
 *@nmemb: length array
 *@size: size of each element
 *Return: pointer or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ar;

if (size == 0 || nmemb == 0)
{
return (NULL);
}
ar = malloc(sizeof(int) * nmemb);

if (ar == 0)
{
return (NULL);
}
_memset(ar, 0, sizeof(int) * nmemb);

return (ar);
}
