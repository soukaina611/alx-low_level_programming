#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagonals of a square matrix of integer
 *@a:input
 *@size:input
 * Return: 0 means success
 */

void print_diagsums(int *a, int size)
{
int somme1, somme2, index;

somme1 = 0;
somme2 = 0;

for (index = 0; index < size ; index++)
{
somme1 = somme1 + a[index * size + index];
}
for (index = size - 1 ; index >= 0 ; index--)
{
somme2 = somme2 + a[index * size + (size - index - 1)];
}
printf("%d, %d\n", somme1, somme2);
}
