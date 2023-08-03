#include "main.h"

/**
 *binary_to_uint - func that convert binary_numb
 *@binary_num: the str of binary numb
 *Return: the value of binary num in unsigned integer
 */

unsigned int binary_to_uint(const char *binary_num)
{
unsigned int number = 0;
unsigned int val;
if (!binary_num)
{
return (0);
}
while (*binary_num)
{
if (*binary_num != '0' && *binary_num != '1')
{
return (0);
}
val = (*binary_num++ - '0');
number = number * 2 + val;
}
return (number);
}
