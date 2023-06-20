#include <stdio.h>

/**
 * main - entry point
 * Description:'prints the size of various types on the computer'
 * Return: 0 means Success
*/

int main(void)
{
char x;
int y;
long int z;
long long int e;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
