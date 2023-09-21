#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
		int i, k = i + 1;

<<<<<<< HEAD
		for (i = 0; s[i] != '\0'; i++)
			;
		for (j = 0; j <= i + 1; j++)
=======
		for (i = 0; s[k] != '\0'; i++)
>>>>>>> 25950ff5b1a0be640b25cffe211d177f1f90e85b
		{
			if (s[i] == c)
				return (&s[i]);
		}
		return (NULL);
}
