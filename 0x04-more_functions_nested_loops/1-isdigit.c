#include "main.h"

/**
 * _isdigit - function checks for a digit (0 through 9)
 *@c: the number to check
 * Return: 1 if is digit else 0
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
