#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, n, i;

	for (len = 0; str[len] != '\0'; len++)
		;
	n = 0.5 * len;
	for (i = 0; str[i + h] != '\0'; i++)
		
		_putchar(str[i + n]);

	_putchar('\n');
}
