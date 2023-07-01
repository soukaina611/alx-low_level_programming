#include "main.h"

/**
 *_strcmp - compare two string
 *@string1: the first string
 *@string2: the second string
 *Return: 0 or positive integer or negative if (s1 < s2)
*/

int _strcmp(char *string1, char *string2)
{
int index = 0;

while (string1[index] != '\0' && string2[index] != '\0')
{
if (string1[index] != string2[index])
{
return (string1[index] - string2[index]);
}
index++;
}
return (0);
}
