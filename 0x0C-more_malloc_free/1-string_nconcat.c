#include "main.h"
#include <stdio.h>

/**
 *string_nconcat - function concatenates two strings
 *@s1:first string
 *@s2:string to copy with n bytes
 *@n: n bytes
 *Return: pointer to memory areaof concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ar;
unsigned int a, b, s1_len, s2_len;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (s1_len = 0; s1[s1_len] != '\0' ; s1_len++)
;
for (s2_len = 0; s2[s2_len] != '\0' ; s2_len++)
;
ar = malloc(s1_len + n + 1);
if (ar == NULL)
{
return (NULL);
}
for (a = 0; s1[a] != '\0'; a++)
{
ar[a] = s1[a];
}
for (b = 0; b < n; b++)
{
ar[a] = s2[b];
a++;
}
ar[a] = '\0';
return (ar);
}
