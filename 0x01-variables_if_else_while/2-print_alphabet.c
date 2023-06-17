#include <stdio.h>
/**
 * main - print the alphabet in lowercase
 * Description:'alphabet in lowercase followed by new line.'
 * Return: always 0 means success
*/
int main(void)
{
	int index;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (index = 0; index < 26; index++)
	{
		putchar(alphabet[index]);
	}
	putchar('\n');
	return (0);
}
