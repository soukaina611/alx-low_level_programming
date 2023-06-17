#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * Description:'prints the lowercase alphabet in reverse'
 * Return: 0 means Success
*/

int main(void)
{
int i;
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

for (i = strlen(alphabet) - 1; i >= 0; i--)
putchar(alphabet[i]);
putchar('\n');

return (0);
}
