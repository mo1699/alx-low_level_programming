#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int i = n % 10;
	if (i > 5)
		printf("Last digit of %d is %d and is greater than 5", n, i);
	else if (i < 6)
		printf("Last digit of %d is %d and is less than 6", n, i);
	else if (i == 0)
		printf("Last digit of %d is %d and is 0", n, i);
	return (0);
}
