#include "lists.h"

/**
 *free_list - function that free a linked list
 *@head: the first node in list
 *Return: nothing (void)
 */
void free_list(list_t *head)
{
list_t *tmp;

while ((tmp = head) != NULL)
{
head = head->next;
free(tmp->str);
free(tmp);
}
}
