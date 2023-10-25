#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - is a function to free a list
 *@head : is the list.
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
