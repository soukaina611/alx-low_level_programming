#include "lists.h"

/**
 *reverse_listint - function that reverse a list
 *@h:the frist node
 *Return: the *pt to new list
 */

listint_t *reverse_listint(listint_t **h)
{
listint_t *prev_nodee = NULL;
listint_t *next_nodee = NULL;

while (*h)
{
next_nodee = (*h)->next;
(*h)->next = prev_nodee;
prev_nodee = *h;
*h = next_nodee;
}

*h = prev_nodee;
return (*h);
}
