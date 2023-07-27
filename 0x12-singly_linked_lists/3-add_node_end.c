#include "lists.h"

/**
 *add_node_end - function add new nodee at the end
 *@head: the first node pointer
 *@str: the string of the node to add
 *Return:the adress of new elem
 */
list_t *add_node_end(list_t **head, const char *str)
{
size_t ind;
list_t *new_nodee, *tmp;

new_nodee = malloc(sizeof(list_t));

if (new_nodee == NULL)
{
return (NULL);
}

new_nodee->str = strdup(str);

for (ind = 0 ; str[ind]; ind++)
;
{
new_nodee->len = ind;
new_nodee->next = NULL;
tmp = *head;
}
if (tmp == NULL)
{
*head = new_nodee;
}
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new_nodee;
}
return (*head);
}

