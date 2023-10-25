#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - is a function to free a list
 *@head : is the list.
 */
void free_listint(listint_t *head)
{
	unsigned int i;
	listint_t *temp;

	for (i = 0; head != NULL; i++)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
