#include "main.h"

/**
 *puts_half - function that prints half of a string
 *@string: the string to treat
 *Return:void
*/

void puts_half(char *string)
{
int i = 0;
int j;

while (string[i] != '\0')
i++;
if (i % 2 == 1)
{
j = (i - 1) / 2;
j += 1;
}
else
{
j = i / 2;
}
for (; j < i ; j++)
{
_putchar(string[j]);
}
_putchar('\n');
}
