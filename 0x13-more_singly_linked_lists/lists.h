#ifndef lists_h
#define lists_h

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

size_t listint_len(const listint_t *head);

size_t print_listint(const listint_t *head);

listint_t *add_nodeint(listint_t **head, const int n);

listint_t *add_nodeint_end(listint_t **head, const int number);

void free_listint(listint_t *h);

void free_listint2(listint_t **h);

int pop_listint(listint_t **h);

listint_t *get_nodeint_at_index(listint_t *h, unsigned int index);

int sum_listint(listint_t *h);

listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int number);

int delete_nodeint_at_index(listint_t **h, unsigned int index);

listint_t *reverse_listint(listint_t **h);

size_t print_listint_safe(const listint_t *h);

#endif

