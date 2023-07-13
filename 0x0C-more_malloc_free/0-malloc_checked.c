#include "main.h"

/**
 *malloc_checked - function allocate memory using malloc
 *@b:integer
 *Return: a poiter to the first area of memory or 98
*/

void *malloc_checked(unsigned int b)
{
int *ar = malloc(b);

if (ar == 0)
{
exit(98);
}
return (ar);
}
