#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - function prints strings
 *@separator: the separator in the string
 *@n: number of string
 *Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arguments;
char *string;
unsigned int index;

va_start(arguments, n);

for (index = 0 ; index < n; index++)
{
string = va_arg(arguments, char *);

if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", string);
}
if (index != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(arguments);
}
