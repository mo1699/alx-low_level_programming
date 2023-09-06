#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int i;
<<<<<<< HEAD

	if (n <= 98)
	{
	for (i = n ; i <= 98 ; i++)
	{
		if (i != 98)
			printf("%d, ", i);
		else if (i == 98)
			printf("%d", i);
	}
	}
	if (n >= 98)
	{
	for (i = n ; i >= 98 ; i--)
	{
		if (i != 98)
			printf("%d, ", i);
		else if (i == 98)
			printf("%d", i);
	}
}
	printf("\n");
=======
	
if ( n <= 98){
    for ( i = n; i <= 98; i++)
	    {
	    {
	if (i != 98 )
	printf("%d, ",i);
	else if ( i == 98)
	printf("%d\n",i);  
      }
	 else if (n >= 98)
    {
for (i =n; i >= 98; i--)
      {
      if (i != 98 )
        printf("%d, ",i);
        else if (i == 98)
           printf("%d\n",i);
      }
    }
>>>>>>> 93539de22a4b345680ddc0ac19f523a0f3218431
}
