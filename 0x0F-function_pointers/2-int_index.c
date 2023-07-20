#include "function_pointers.h"

/**
 * int_index - function searhes for an integr
 *@array:the array
 *@size: size if array
 *@cmp:compare function
 *Return: index of integer in aray else -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int index = 0;
if (array && size && cmp)
{
while (index < size)
{
if (cmp(array[index]))
{
return (index);
}
index++;
}
}
return (-1);
}
