#include "main.h"
#include <stdio.h>

/**
 *print_rev - function prints a string, in reverse
 *@s:the string to reverse
 *Return:empty
*/

void print_rev(char *s)
{
int index = 0;
while (s[index] != '\0')
index++;
for (index -= 1; index >= 0; index--)
{
_putchar(s[index]);
}
_putchar('\n');
}
