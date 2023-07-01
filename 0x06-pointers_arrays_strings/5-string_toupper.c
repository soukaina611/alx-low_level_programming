#include "main.h"

/**
 *string_toupper - function changes lowercase letters of a string to uppercase
 *@string: the string to change
 *Return: string on uppercase
*/

char *string_toupper(char *string)
{
int index = 0;

while (string[index] != '\0')
{
if (string[index] >= 'a' && string[index] <= 'z')
string[index] = string[index] - 32;
index++;
}
return (string);
}
