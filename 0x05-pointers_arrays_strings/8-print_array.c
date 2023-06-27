#include "main.h"
#include <stdio.h>

/**
 *print_array - function prints n elements of an array of integers
 *@array: the array of integers
 *@number:the number of elements
 *Return:void
*/

void print_array(int *array, int number)
{
int index;

for (index = 0 ; index < (number - 1); index++)
{
printf("%d, ", array[index]);
}
if (index == (number - 1))
{
printf("%d", array[number - 1]);
}
printf("\n");
}
