#include "main.h"

/**
 *_memcpy - function copies memory area
 *@dest: memory destination
 *@src: memory where is copies
 *@number:the number of bytes
 *Return:copied memory area with n bytes
*/

char *_memcpy(char *dest, char *src, unsigned int number)
{
int a = 0;
int index = number;

for (; a < index ; a++)
{
	dest[a] = src[a];
	number--;
}
return (dest);
}
