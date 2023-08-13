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
	int i;

	while (a[i] != '\0' && i<n) {
    if (i != (n - 1)) {
      _putchar("%c, ", a[i]);
    } else {
      _putchar("%c", a[i]);
    }
    i++;
  }
}
