#include "lists.h"

/**
 *add_node - func adds a new node in  beginning of linked list
 *@head: first node of list
 *@str: the string data to add
 *Return: the address of the first node (head)
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_nodee;
size_t ind;

new_nodee = malloc(sizeof(list_t));

if (new_nodee == NULL)
{
return (NULL);
}
new_nodee->str = strdup(str);

for (ind = 0; str[ind]; ind++)
;
{
new_nodee->len = ind;
new_nodee->next = *head;
*head = new_nodee;
}
return (*head);
}
