#include "main.h"

/**
 * print_alphabet_x10 - function print 10 times2-print_alphabet_x10.c all the alphabet
 * Description:'prints 10 times the alphabet, in lowercase'
 * Return:void
*/

void print_alphabet_x10(void)
{

char alphabet;
int i = 0;

while (i <= 9)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
i++;
}
}
