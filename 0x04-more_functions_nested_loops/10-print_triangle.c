#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, s, b;

	if (size <= 0)
		_putchar('\n');
	else
		for (i = 1; i <= size; i++)
		{
			for (s = 0; s < size - i; s++)
				_putchar(' ');
			for (b = 0; b < i ; b++)
				_putchar('#');
			_putchar('\n');
		}
}
