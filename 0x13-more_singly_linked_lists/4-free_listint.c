#include "lists.h"

/**
 *free_listint - function free a linked list given
 *@h:the first node in linked list
 *Return: void(nothing)
 */
void free_listint(listint_t *h)
{
listint_t *tmp;

while (h)
{
tmp = h->next;
free(h);
h = tmp;
}
}
