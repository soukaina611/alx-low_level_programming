#include "main.h"
/**
 *clear_bit - function remove bit at given idx
 *@num:the number we want to idx
 *@idx: the idx of bit to remove
 *Return: if error -1 else 1 mean success
 */
int clear_bit(unsigned long int *num, unsigned int idx)
{

if (idx > 63)
{
return (-1);
}
if (*num & 1L << idx)
{

*num ^= 1L << idx;
}
return (1);
}
