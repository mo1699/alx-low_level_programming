#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{

	int i, k = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		if (s1 != s2)
		{
			k = s1 - s2;
			break;
		}
	if (s1 != s2)
		k = s1 - s2;
	return	(k);
}
