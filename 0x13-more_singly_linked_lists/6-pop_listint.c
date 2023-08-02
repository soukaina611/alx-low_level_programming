#include "lists.h"

/**
 *pop_listint - function that delete first node of linked list
 *@h:the first node
 *Return: 0 if data of first node is empty or his value
 */

int pop_listint(listint_t **h)
{
listint_t *tmp;
int data_n;

if (!h || !*h)
{
return (0);
}

data_n = (*h)->n;
tmp = (*h)->next;
free(*h);
*h = tmp;

return (data_n);
}
