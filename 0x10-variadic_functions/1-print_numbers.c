#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - function prints numbers
 *@separator: the string separator
 *@n: number of arguments
 *Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int index;
int arg;
va_list(arguments);
va_start(arguments, n);

for (index = 0; index < n ; index++)
{
arg = va_arg(arguments, int);

printf("%d", arg);
if (index != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
}
