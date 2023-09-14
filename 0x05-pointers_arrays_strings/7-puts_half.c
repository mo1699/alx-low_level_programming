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
	for (i = 0; str[i + n] != '\0'; i++)
	{
		if (len % 2 != 0){
			n = (len - 1) * 0.5;
				_putchar(str[i + n]);
		}
		else 
		{
			n = 0.5 * len;
			_putchar(str[i + n]);
		}
	}
	_putchar('\n');
}
