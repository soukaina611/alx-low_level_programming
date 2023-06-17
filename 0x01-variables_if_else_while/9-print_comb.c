#include <stdio.h>

/**
 * main - entry point
 * Description:'prints all possible comb of single-digit numbers'
 * Return: 0 means Success
*/

int main(void)
{
int number;

for (number = 48; number <= 57; number++)
{

	putchar(number);
	putchar(',');
	putchar(' ');
}
putchar('\n');

return (0);
}
