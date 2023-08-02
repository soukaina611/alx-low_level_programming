#include "lists.h"
/**
 *free_listint_safe - func that free safelly a list (listint_t)
 *@head: the first node in listint_t list
 *Return: the nb of elem in freed listint_t list
 */

size_t free_listint_safe(listint_t **head)
{
listint_t *tmp;
size_t size = 0;
int variation;

if (!*head || !head)
{
return (0);
}
while (*head)
{
variation = *head - (*head)->next;

if (variation > 0)
{

tmp = (*head)->next;

free(*head);

*head = tmp;

size = size + 1;
}

else
{
free(*head);
*head = NULL;
size = size + 1;
break;
}
}

*head = NULL;

return (size);
}
