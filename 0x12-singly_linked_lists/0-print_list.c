#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that print all elem of list
 * @head: the pointer to the first node
 * Return: the number of node in list
 */
size_t print_list(const list_t *head)
{
	size_t ind = 0;

	while (head)
	{
		if (!head->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);
		head = head->next;
		ind++;
	}

	return (ind);
}
