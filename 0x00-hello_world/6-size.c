#include <stdio.h>
/**
 * main - Entery point
 *
 *Description:using sizeof to print the sizeof various types.
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	printf("size of a chart: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of afloat: %lu byte(s)\n", sizeof(float));
	return (0);
}
