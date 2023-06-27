#include <stdio.h>
#include <string.h>

/**
 *rev_string - function that reverses a string
 *@string: the string to reverse
 *Return: void
*/

void rev_string(char *string)
{
int index, length;
char temp;
length = strlen(string);
for (index = 0; index < length / 2; index++)
{
temp = string[index];
string[index] = string[length - index - 1];
string[length - index - 1] = temp;
}
}
