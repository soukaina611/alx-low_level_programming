#include "lists.h"

/**
 *free_listint2 - function that free a list
 *@h:the first node of the list given
 *Return: void (nothing)
 */

void free_listint2(listint_t **h)
{
listint_t *tmp;

if (h == NULL)
return;

while (*h)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
}
*h = NULL;
}
