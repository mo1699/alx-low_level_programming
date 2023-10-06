#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *d;
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i == 0)
		return (NULL);
	d = malloc(sizeof(char) * i);
	if (d == NULL)
		return (NULL);
	for (i = 0; d[i] != '\0'; i++)
		d[i] = str[i];
	return (d);
}
