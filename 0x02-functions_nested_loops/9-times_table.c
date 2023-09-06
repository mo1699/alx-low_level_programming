#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
  int i;
  int n;
  for (i =0; i <= 9; i++)
  {
    for(n = 0; n <= 9; n++)
    {
      if (n != 9)
       printf("%d, ",n*i); 
      else if (n == 9)
        printf("%d",n*i);
    }
    
      printf("\n");
}
}
