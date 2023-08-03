#include "lists.h"
#include <stdio.h>

size_t loop_listint_length(const listint_t *h);
size_t print_listint_safe(const listint_t *h);

/**
 *loop_listint_length - funct that calculate the number of nodes in list
 *@h: the first node
 *Return: 0 or nb of nodes in linked list
 */

size_t loop_listint_length(const listint_t *h)
{
size_t number_of_nodes = 1;
const listint_t *node1, *node2;

if (h->next == NULL || h == NULL)
{
return (0);
}

node1 = h->next;
node2 = (h->next)->next;

while (node2)
{
if (node1 == node2)
{
node1 = h;
while (node1 != node2)
{
number_of_nodes = number_of_nodes + 1;
node1 = node1->next;
node2 = node2->next;
}

node1 = node1->next;

while (node1 != node2)
{
number_of_nodes = number_of_nodes + 1;
node1 = node1->next;
}
return (number_of_nodes);
}
node1 = node1->next;
node2 = (node2->next)->next;
}
return (0);
}
/**
 *print_listint_safe - function that print safelly a linked list
 *@h: the first node
 *Return: number_of_nodes in linked list
 */

size_t print_listint_safe(const listint_t *h)
{
size_t indx, number_of_nodes = 0;

number_of_nodes = loop_listint_length(h);

if (number_of_nodes == 0)
{
for (; h != NULL; number_of_nodes++)
{
printf("[%p] %d\n", (void *)h, h->n);

h = h->next;
}
}
else
{
for (indx = 0; indx < number_of_nodes; indx++)
{
printf("[%p] %d\n", (void *)h, h->n);

h = h->next;
}
printf("-> [%p] %d\n", (void *)h, h->n);
}
return (number_of_nodes);
}
