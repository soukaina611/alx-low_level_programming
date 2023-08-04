#include "main.h"
/**
 *print_binary - function print a nb in binary
 *@number: the printed number given
 *Return: nothing (void)
 */
void print_binary(unsigned long int number)
{
int value_printed = 0;
int j = 0;
unsigned long int present;
for (j = 63; j >= 0; j--)
{
present = number >> j;

if (present & 1)
{
_putchar('1');
value_printed = value_printed + 1;
}
else if (value_printed)
{
_putchar('0');
}
}

if (!value_printed)
{
_putchar('0');
}
}
