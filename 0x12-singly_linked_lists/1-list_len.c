#include <stdlib.h>
#include "lists.h"

/**
 *list_len- returns number of elements of linked list
 *
 *@h: list that printed the number of its elements
 *
 * Return: number of element in linked list
 **/
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
