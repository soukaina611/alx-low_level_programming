#include "main.h"

/**
 * print_last_digit - function prints the last digit of a number
 * @number: number to compute
 * Return: the value of the last digit.
*/

int print_last_digit(int number)
{
int last;
last = number % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
