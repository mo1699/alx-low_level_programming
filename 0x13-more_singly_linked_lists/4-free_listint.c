#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - is a function to free a list
 *@head : is the list.
 */
void free_listint(listint_t *head)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		free(head);
		head = head->next;
	}
}
