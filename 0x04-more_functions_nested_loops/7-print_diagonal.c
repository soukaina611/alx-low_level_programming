#include "main.h"

/**
 *print_diagonal - function draws a diagonal line on the terminal
 *@num:number of times print diagonal
 *Return:empty
*/

void print_diagonal(int num)
{
int a, b;

if (num <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < num; a++)
{
for (b = 0; b < a; b++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
