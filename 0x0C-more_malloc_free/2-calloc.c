#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function  allocates memory for an array
 *@nmemb: length array
 *@size: size of each element
 *Return: pointer or NULL if fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ar;
unsigned int x;

if (size == 0 || nmemb == 0)
{
return (NULL);
}
ar = malloc(sizeof(int) * nmemb);

if (ar == 0)
{
return (NULL);
}
for (x = 0 ; x < (nmemb * size); x++)
{
ar[x] = 0;
}
return (ar);
}
