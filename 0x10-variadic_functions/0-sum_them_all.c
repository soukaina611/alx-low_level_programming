#include <stdarg.h>

/**
 *sum_them_all - function sum of all its parameters
 *@n: number of parameters
 *Return: sum of values in paramters
*/

int sum_them_all(const unsigned int n, ...)
{
va_list(arguments);
int sum = 0;
unsigned int index;

if (n == 0)
{
return (0);
}
va_start(arguments, n);
for (index = 0 ; index < n ; index++)
{
int a = va_arg(arguments, int);
sum += a;
}
va_end(arguments);
return (sum);
}
