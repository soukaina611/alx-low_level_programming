#include "main.h"

/**
 *print_line - function draws a straight line in the terminal
 *@num:number of lines to draw
 *Return:empty
*/

void print_line(int num)
{
int a;

if (num <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a <= num; a++)
{
_putchar(95);
}
_putchar('\n');
}
}
