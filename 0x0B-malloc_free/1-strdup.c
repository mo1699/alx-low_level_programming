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

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	d = malloc(sizeof(char) * (i + 1));
	if (d == NULL)
		return (NULL);
	for (i  = 0; str[i] != '\0'; i++)
		d[i] = str[i];
	return (d);
}
