#include "main.h"
#include <string.h>

/**
 **_strcat - function concatenates two strings
 *@dest:string to
 *@src:string from
 *Return:string
*/

char *_strcat(char *dest, char *src)
{
char *concat;
concat = strcat(dest, src);
return (concat);
}
