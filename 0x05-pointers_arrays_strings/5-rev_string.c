#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j;

	i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = i - 1; j >= 0; j++)
		;
	s[i] = s[j];
}
