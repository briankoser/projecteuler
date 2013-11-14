/******************
Brian Koser
Project Euler - 2
Even Fibonaccis Sum
2008.11.29.12.28
******************/
#include <stdio.h>

#define LIMIT 4000000

int isEven(int number);

int main()
{
   int current   = 1,
       fibonacci = 0,
       previous  = 0,
       sum       = 0;

   printf("\n\nThe sum of the even numbers of the Fibonacci sequence, from 0-%d is: ", LIMIT);

   while(fibonacci <= LIMIT)
   {
      fibonacci = previous + current;
      previous  = current;
      current   = fibonacci;

      if( isEven(fibonacci) && fibonacci <= LIMIT)
         sum += fibonacci;
   }

   printf("%d\n\n", sum);

   return 0;
}

int isEven(int number)
{
   return !(number % 2);
}
