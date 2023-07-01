#include "main.h"

/**
 *leet - function that encodes a string into 1337
 *@str:input value
 *Return:str value
*/

char *leet(char *str)
{
int a;
int b;
char string1[] = "aAeEoOtTlL";
char string2[] = "4433007711";

for (a = 0; str[a] != '\0'; a++)
{
for (b = 0; b < 10; b++)
{
if (str[a] == string1[b])
{
str[a] = string2[b];
}
}
}
return (str);
}
