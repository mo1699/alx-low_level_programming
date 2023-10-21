#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
