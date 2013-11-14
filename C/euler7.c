/***********************************************************
Brian Koser
Project Euler - 7
Find the 10,001st prime
2009.08.11.11.02
***********************************************************/

#include <stdio.h>

#define PRIME_QUANTITY 10000

int main()
{
   _Bool success;
   int counter,     /* Counts from beginning of prime array to last */
       i,           /* For loop counter */
       last    = 2, /* Last prime in the array */
       number  = 4; /* Tested to find if it is prime */
   long long primes[PRIME_QUANTITY + 1] = {2, 3};

   primes[PRIME_QUANTITY] = 0;

   printf("\n\nThe program finds the largest prime factor of a number.\n\n");

   while(!primes[PRIME_QUANTITY]) /* Loops while primes array is not full */
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

   for(i = 0; i <= PRIME_QUANTITY; i++)
      printf("%d: %lld\n", i + 1, primes[i]);

   printf("\n\n");
   return 0;
}
