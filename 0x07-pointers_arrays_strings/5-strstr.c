#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
		;
	for (k = 0; k <= i + 1; k++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[k] == needle[j])
				return (&haystack[k]);
			break;
	}
	
}

return (NULL);
}
