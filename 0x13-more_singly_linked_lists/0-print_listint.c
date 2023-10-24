#include "lists.h"

/**
 *print_listint - is a function to print content of linked list.
 *@h : is the header node.
 *Return: the number of printed nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
