#include "main.h"
/**
 *flip_bits - func return nb of bits that is required to flip
 *@n:the fst given number
 *@m:the 2nd given number
 *Return:the nb of bits required to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int printed_value = 0;
int k = 0;
unsigned long int present;

for (k = 63; k >= 0 ; k--)
{
present = (n ^ m) >> k;

if (present & 1)
{
printed_value = printed_value + 1;
}
}
return (printed_value);
}

