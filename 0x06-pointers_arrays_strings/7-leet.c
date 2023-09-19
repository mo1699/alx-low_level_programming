#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int i;
	char c[5] ={'A','E','O','T','L'};
	char m[5] ={'a','e','o','t','l'};
	char n[5] ={'4','3','0','7','1'};

	for (i = 0; s[i] != '\0' && s[i] != '\0' ; i++)
        	for (i = 0; c[i] != '\0' && m[i] != '\0'; i++)
                	if (s[i] == c[i] || s[i] == m[i])
                        	s[i] = n[i];
	return (s);
}
