#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@p1: the first integer to swap
 *@p2: the second integer to swap
 *Return: empty
*/

void swap_int(int *p1, int *p2)
{
int temp;
temp = *p1;
*p1 = *p2;
*p2 = temp;
}
