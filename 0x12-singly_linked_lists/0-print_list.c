#include "lists.h"

/**
 *_strlen - function that return the length of string
 *@string: the string to calculate the length
 *Return: length of string
 */

int _strlen(char *string)
{
int index = 0;
if (!string)
{
return (0);
}
while (*string++)
{
index++;
}
return (index);
}

/**
 *print_list - function that print all elem of list
 *@head: the pointer to the first node
 *Return: the number of node in list
*/

size_t print_list(const list_t *head)
{
size_t ind = 0;

while (head)
{
printf("[%d] %s\n", _strlen(head->str), head->str ? head->str : "(nil)");
head = head->next;
ind++;
}
return (ind);
}
