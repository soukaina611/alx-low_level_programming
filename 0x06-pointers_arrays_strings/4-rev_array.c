#include "main.h"

/**
 *reverse_array - function reverses the content of an array of integers.
 *@a:array of integers
 *@n:number of elements in array
 *Return:void
*/

void reverse_array(int *a, int n)
{
int index;
int temp;

for (index = 0; index < n; index++)
{
	temp = a[index];
	a[index] = a[n - 1];
	a[n - 1] = temp;
	n--;
}
}
