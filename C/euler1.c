/*****************
Brian Koser
Project Euler - 1
2008.11.15.15.28
*****************/
#include <stdio.h>

#define LIMIT 1000

int main()
{
   int number;
   int total  = 0;

   for(number = 1; number < LIMIT; number++)
   {
      if(number % 3 == 0 || number % 5 == 0)
         total += number;
   }

   printf("\n\nThe sum of all natural numbers divisible by 3 or 5 from 1-%d is: %d\n\n", LIMIT, total); 
   
   return 0;
}
