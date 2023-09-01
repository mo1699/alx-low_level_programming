#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; ch[i] <= 'r'; i++)
		_putchar(ch[i]);
	_putchar('\n');

	return (0);
}
