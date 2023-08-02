#include "lists.h"

/**
 *add_nodeint_end - func add elem in the end of linked list
 *@head: the first node
 *@number: the value to insert
 *Return: Null or *pt to the new elem
 */

listint_t *add_nodeint_end(listint_t **head, const int number)
{
listint_t *new_nodee;
listint_t *tmp = *head;

new_nodee = malloc(sizeof(listint_t));

if (new_nodee == NULL)
{
return (NULL);
}
new_nodee->n = number;
new_nodee->next = NULL;

if (*head == NULL)
{
*head = new_nodee;
return (new_nodee);
}

while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = new_nodee;
return (new_nodee);
}
