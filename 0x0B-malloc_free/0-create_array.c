#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	if (size == 0)
		return	(NULL);
	m = malloc(sizeof(char) * size);
	if (m == NULL)
		return	(NULL);
	for (i = 0; m[i] != '\0'; i++)
		m[i] = c;
	return (m);
}
