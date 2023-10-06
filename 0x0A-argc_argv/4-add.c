#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * * main - adds two positive number
 * atoi - converts a string to an integer
 * @argc: number of arguments
 * @argv: array of arguents
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, k, sum = 0, num;

	for (i = 1; i < argc; i++)
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return	(1);
			}
		for (k = 0; k < argc; k++)
		{
			num = atoi(argv[argc - 1]);
			if (num >= 0)
				sum += num;
		}
		printf("%d\n", sum);
			return (0);
}
