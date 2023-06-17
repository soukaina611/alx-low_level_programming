#include <stdio.h>

/**
 * main - entry point
 * Description:'prints alphabets in lowercase except e and q'
 * Return: 0 means Success
*/

int main(void)
{
char alph, e, q;

for (alph = 'a'; alph <= 'z'; alph++)
if (alph != 'e' && alph != 'q')
putchar(alph);
putchar('\n');

return (0);
}
