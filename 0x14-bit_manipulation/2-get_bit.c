#include "main.h"
/**
 *get_bit - function that return val of bit
 *@numb:the searching number
 *@idx:the position of bit given
 *Return:the val of the bit
 */

int get_bit(unsigned long int numb, unsigned int idx)
{

if (idx > 63)
{
return (-1);
}

return ((numb >> idx) & 1);
}
