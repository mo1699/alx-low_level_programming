#include <stdio.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard error.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char array[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
		int i;
	for(i=0;array[i] != '\0';i++)
		printf(array[i]);
	printf('\n');
	return (1);
}
