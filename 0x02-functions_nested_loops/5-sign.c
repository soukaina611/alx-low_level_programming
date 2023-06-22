#include "main.h"

/**
 * print_sign - function prints the sign of a number.
 * @n: number to check
 * Return:1 for positive number, -1 for negative number else 0
*/

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}

if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}

}
