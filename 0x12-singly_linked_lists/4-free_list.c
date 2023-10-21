#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	unsigned int i;
	list_t *current = head;

	for (i = 0; current != NULL; i++)
	{
		free(current->str);
		free(current);
		current = current->next;
	}
}
