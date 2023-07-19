#include "function_pointers.h"

/**
 *print_name - function prints name
 *@name: the name of person
 *@f:pointer to function
 *Return:void
*/

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
