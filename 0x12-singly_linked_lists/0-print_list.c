#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all element of list_t struct
 *
 * @h: pointer to struct to be print
 *
 *
 * Return:  number of nodes that is print
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);

		}

		h = h->next;
	}
	return (i);
}
