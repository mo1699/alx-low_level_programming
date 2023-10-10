#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		return (NULL);
	s = malloc((max - min) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ((max - min) + 1); i++)
		s[i] = (min + i);
	s[i] = max;
	return (s);
}
