#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * atoi - converts a string to an integer
 * * @argv : arguments to be multiplyed
 * @argc : numbers of argues
 * Return: the int converted from the string
 */
int main(int argc, int *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
			return (0);
	}
	else
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
		printf("%d\n", a * b);
	return (0);
	}
}
