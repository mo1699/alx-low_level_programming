#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
  int i;
  int n;
  
  for (i =0; i <= 9; i++){
    for(n = 0; n <= 9; n++){
      int k= n*i;
      if (n == 0)
        printf("%d",k);
        
     else if (n != 0 && k < 10){
       printf(",  %d",k);
    }
      else if (n != 0 && k >= 10){
          printf(", %d",k);
      }
      
    }
    
      printf("\n");
