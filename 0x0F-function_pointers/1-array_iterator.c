#include "function_pointers.h"

/**
 *array_iterator - function that map array through function pointer
 *@array: given array
 *@size: size of the array
 *@action:function pointer
 *Return: nothing (void)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
int *end_array = array + size - 1;
if (array && size && action)
{
while (array <= end_array)
{
action(*array++);
}
}
}
