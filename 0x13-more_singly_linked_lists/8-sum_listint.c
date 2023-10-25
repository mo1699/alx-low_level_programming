#include "lists.h"
/**
 *sum_listint - is a function that returns the sum of all the data(n) of a list
 *@head : is the head
 *Return: the sum.
 */


int sum_listint(listint_t *head)
{
	int i, sum = 0;

	if (!head)
		return (0);
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
