#include "lists.h"

/**
 *get_nodeint_at_index - function that return the node in index give,
 *@h: the first node
 *@index: the node index that we want to return it
 *Return: the Null or the * pt to the node index
 */

listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
listint_t *tmp = h;
unsigned int k = 0;

while (k < index && tmp)
{
tmp = tmp->next;
k = k + 1;
}
return (tmp ? tmp : NULL);
}
