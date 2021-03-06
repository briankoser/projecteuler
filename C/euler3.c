/***********************************************************
Brian Koser
Project Euler - 3
Find the largest prime factor
2009.08.11.00.16
***********************************************************/

#include <stdio.h>

int main()
{
   _Bool success;
   int counter,     /* Counts from beginning of prime array to last */
       i,           /* For loop counter */
       last    = 2, /* Last prime in the array */
       number  = 4, /* Tested to find if it is prime */
       primes[101] = {2, 3};

   primes[100] = 0;

   printf("\n\nThe program finds the largest prime factor of a number.\n\n");

   while(!primes[100]) /* Loops while primes array is not full */
   {
      counter = 0;
      success = 1;

      while(counter != last) /* Loops while number is still being checked for primeness */
      {
         if( number % primes[counter] ) /* Checks for relative primeness */
            counter++;
         else
         {
            counter = last;
            success = 0;
         }
      }

      if(success)
         primes[last++] = number;

      number++;
   }

   for(i = 0; i <= 100; i++)
      printf("%d: %d\n", i + 1, primes[i]);

   printf("\n\n");
   return 0;
}
