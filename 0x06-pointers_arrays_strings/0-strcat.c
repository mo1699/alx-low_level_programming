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


	for (i = 0; src[i] != '\0'; i++)
	       ;
	for (j = 0; dest[j] != '\0'; j++)
		dest[j+i] = src [j];

	dest[j+i] = '\0';

	return (dest);
}
