#include "lists.h"

/**
 *delete_nodeint_at_index - function delete in index given the node
 *@h:the first node
 *@index: the index of the node to delete in list
 *Return: -1 or 1 if success
 */

int delete_nodeint_at_index(listint_t **h, unsigned int index)
{
listint_t *tmp = *h;
unsigned int k = 0;
listint_t *c = NULL;

if (*h == NULL)
{
return (-1);
}

if (index == 0)
{
*h = (*h)->next;
free(tmp);
return (1);
}
while (k < index - 1)
{
if (!(tmp->next) && tmp)
{
return (-1);
}
tmp = tmp->next;
k = k + 1;
}
c = tmp->next;
tmp->next = c->next;
free(c);
return (1);
}
