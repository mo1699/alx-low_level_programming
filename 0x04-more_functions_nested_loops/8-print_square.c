#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	int i, j;

	do
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
			_putchar('\n');
}
}
	while (size > 0);

	if (size <= 0)
		_putchar('\n');	
}
