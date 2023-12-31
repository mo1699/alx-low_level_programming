#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0;

	if (s1)
		for (i = 0; s1[i] != '\0'; i++)
			;
	if (s2)
		for (j = 0; s2[j] != '\0'; j++)
			;

	s3 = malloc(sizeof(char) * (i + j + 1));
	if (s3 == NULL)
		return (NULL);

	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			s3[i] = s1[i];
		}
	}
	if (s2)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			s3[i + j] = s2[j];
		}
	}
	s3[i + j] = '\0';
	return (s3);
}
