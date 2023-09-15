#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	for (i = 0; src[i] != '\0'; i++)
	       ;
	for (j = 0; dest[j] != '\0'; j++)
		dest[j] = src [i];

	dest[j] = '\0';

	return (dest);
}
