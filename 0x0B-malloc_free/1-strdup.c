#include "main.h"
#include <stdlib.h>

/**
 *_strdup - a pointer allocated space in memory contains a copy of the str
 *@str:the string to copy
 *Return: a pointer to duplicated string or NULL
*/

char *_strdup(char *str)
{
char *ar;
int i, j = 0;

if (str == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
i++;
}
ar = malloc(sizeof(char) * (i + 1));
if (ar == NULL)
{
return (NULL);
}
for (j = 0 ; str[j]; j++)
{
ar[j] = str[j];
}
return (ar);
}
