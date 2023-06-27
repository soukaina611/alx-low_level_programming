#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed
 * @dest: the final destination
 * @src: the copy from
 * Return:string
*/

char *_strcpy(char *dest, char *src)
{
int x = 0;
int y = 0;

while (*(src + x) != '\0')
{
x = x + 1;
}
for ( ; y < x ; y++)
{
dest[y] = src[y];
}
dest[x] = '\0';
return (dest);
}
