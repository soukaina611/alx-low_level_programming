#include "main.h"
/**
 *set_bit - function that put val of a bit to 1
 *@num:the number given to index
 *@idx:the index bit to adjust
 *Return: -1 if there is an error else 1(success)
 */
int set_bit(unsigned long int *num, unsigned int idx)
{

if (idx > 63)
{
return (-1);
}
return (!!(*num |= 1L << idx));
}
