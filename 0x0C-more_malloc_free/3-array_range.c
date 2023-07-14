#include "main.h"

/**
 *array_range - function create array of integers
 *@max: max integer
 *@min: starting integer
 *Return: array of integers
 */

int *array_range(int min, int max)
{
int length, i;
int *ar;

if (min >  max)
{
return (NULL);
}
length = max - min + 1;
ar = malloc(sizeof(int) * length);

if (!ar)
return (NULL);

for (i = 0; i < length; i++)
{
ar[i] = min++;
}
return (ar);
}
