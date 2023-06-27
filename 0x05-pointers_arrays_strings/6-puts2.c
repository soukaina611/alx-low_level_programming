#include "main.h"

/**
 *puts2 - prints every other character of a string starting with the first char
 *@string: the string to treat
 *Return: void
*/

void puts2(char *string)
{
int a;
int b = 0;
while (string[b] != '\0')
b++;
for (a = 0; a < b; a += 2)
{
_putchar(string[a]);
}
_putchar('\n');
}
