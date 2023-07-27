#include "lists.h"

/**
 *_strlen - function that return the length of string
 *@string: the string to calculate the length
 *Return: length of string
 */

int _strlen(char *string)
{
int index = 0;

if (!string)
{
return (0);
}
while (*string++)
{
index++;
}
return (index);
}

/**
 *print_list - function that print all elem of list
 *@h: the pointer to the first node
 *Return: the number of node in list
*/

size_t print_list(const list_t *h)
{
size_t ind = 0;

while (h)
{
printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
ind++;
}
return (ind);
}
