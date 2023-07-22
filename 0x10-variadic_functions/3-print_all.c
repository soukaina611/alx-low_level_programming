#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - function prints anything
 *@format: list of types of arguments can be char, integer or float
 *Return:void
*/

void print_all(const char * const format, ...)
{
int index = 0;
char *string, *separator = "";
va_list arguments;
va_start(arguments, format);

if (format)
{
while (format[index])
{
switch (format[index])
{
case 'c':
printf("%s%c", separator, va_arg(arguments, int));
break;
case 'i':
printf("%s%d", separator, va_arg(arguments, int));
break;
case 'f':
printf("%s%f", separator, va_arg(arguments, double));
break;
case 's':
string = va_arg(arguments, char *);
if (!string)
{
string = "(nil)";
}
printf("%s%s", separator, string);
break;
default:
index++;
continue;
}
separator = ", ";
index++;
}
}
printf("\n");
va_end(arguments);
}
