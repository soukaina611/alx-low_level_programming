#include "3-calc.h"

/**
 *get_op_func - pointer to right operator func selected by user
 *@s: the string operator
 *Return:function pointer
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int index = 0;

while (index < 5)
{
if (s && s[0] == ops[index].op[0] && !s[1])
{
return (ops[index].f);
}
index++;
}
return (NULL);
}
