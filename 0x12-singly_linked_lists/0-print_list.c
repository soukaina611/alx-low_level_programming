#include "lists.h"

/**
 * print_list - function that print all elem of list
 * @h: the pointer to the first node
 *
 * Return: the number of node in list
*/

size_t print_list(const list_t *h)
{
size_t ind = 0;

while (h)
{
if (!h->str)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
ind++;
}
return (ind);
}
