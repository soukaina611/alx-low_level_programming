#include <stdlib.h>
#include "lists.h"

/**
 *list_len - func returns the number of elem in linked list
 *@h: the pointer to the first node of list
 *Return: the number of elem
 */
size_t list_len(const list_t *h)
{
size_t index = 0;

while (h)
{
index++;
h = h->next;
}
return (index);
}
