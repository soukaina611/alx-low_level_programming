#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars, and initializes it with char
 *@size: size of array
 *@c:specific char
 *Return:a pointer to the array or NULL
*/

char *create_array(unsigned int size, char c)
{
char *s1;

s1 = malloc(size);
if (size == 0 || s1 == 0)
{
return (0);
}
while (size--)
{
s1[size] = c;
}
return (s1);
}
