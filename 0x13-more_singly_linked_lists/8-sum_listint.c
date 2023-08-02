#include "lists.h"

/**
 *sum_listint - function that give the sum of all data in linked list
 *@h: the first node
 *Return: the value of the sum
 */

int sum_listint(listint_t *h)
{
listint_t *tmp = h;
int somme = 0;

while (tmp)
{
somme = somme + tmp->n;
tmp = tmp->next;
}
return (somme);
}
