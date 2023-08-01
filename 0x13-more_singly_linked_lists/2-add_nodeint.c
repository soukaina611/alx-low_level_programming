#include "lists.h"

/**
 *add_nodeint - function add new node in linked list listint_t
 *@head: the first node of list
 *@n:value to add on that new node
 *Return: Null value or the *pt to this new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_nodee;

new_nodee = malloc(sizeof(listint_t));

if (new_nodee == NULL)
{
return (NULL);
}
new_nodee->n = n;
new_nodee->next = *head;
*head = new_nodee;

return (new_nodee);
}

