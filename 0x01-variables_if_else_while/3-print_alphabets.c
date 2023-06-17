#include <stdio.h>

/**
 * main - entry point
 * Description:'prints alphabets in lowercase and then in uppercase'
 * Return: 0 means Success
*/

int main(void)
{
  char alph;

  for (alph = 'a'; alph <= 'z'; alph++)
	  putchar(alph);
  for (alph = 'A'; alph <= 'Z'; alph++)
	  putchar(alph);
  putchar('\n');

  return (0);
}
