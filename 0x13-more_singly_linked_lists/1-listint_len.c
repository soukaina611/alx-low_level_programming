#include "lists.h"

/**
 *listint_len - func return nb of elem in linked list
 *@head: the first node in linked list
 *Return: the number of elemts
 */

size_t listint_len(const listint_t *head)
{
size_t indx = 0;

while (head)
{
indx = indx + 1;
head = head->next;
}
return (indx);
}
