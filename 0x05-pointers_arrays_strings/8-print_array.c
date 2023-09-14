#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	for (n = 0; a[n] != '\0'; n++)
		if (a[n +1] != '\0')
			printf("%d,", a[n]);
		else
			printf("%d", a[n]);
	printf("\n");
}
