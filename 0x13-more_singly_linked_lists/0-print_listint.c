#include "lists.h"

/**
 *print_listint - function print all elem of linked list
 *@head: the first node of linked list
 *Return: the number of elemts in listint_t list
 */

size_t print_listint(const listint_t *head)
{
size_t indx = 0;

while (head)
{
printf("%d\n", head->n);
indx++;
head = head->next;
}
return (indx);
}
