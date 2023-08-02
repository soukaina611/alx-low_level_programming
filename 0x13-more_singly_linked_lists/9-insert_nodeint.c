#include "lists.h"

/**
 *insert_nodeint_at_index - func insert new_nodee at index given
 *@h: the first node
 *@idx: the index where to add the new node in list
 *@number: the value data to give to new node
 *Return: Null or *pt to this new_node
 */

listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int number)
{
listint_t *new_nodee;
listint_t *tmp = *h;
unsigned int k;

new_nodee = malloc(sizeof(listint_t));

if (!h || !new_nodee)
{
return (NULL);
}
new_nodee->n = number;
new_nodee->next = NULL;

if (idx == 0)
{
new_nodee->next = *h;
*h = new_nodee;
return (new_nodee);
}

for (k = 0; tmp && k < idx; k++)
{
if (k == idx - 1)
{
new_nodee->next = tmp->next;
tmp->next = new_nodee;
return (new_nodee);
}
else
{
tmp = tmp->next;
}
}
return (NULL);
}
