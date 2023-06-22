#include "main.h"

/**
 * _isalpha - function checks for alphabetic character
 * @c:character to check
 * Return:1 if is lowercase else 0
*/

int _isalpha(int c)
{

if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))

return (1);
return (0);

}
