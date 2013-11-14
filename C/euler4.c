/***********************************************************
Brian Koser
Project Euler - 3
Find the largest palindrome product of 2 three-digit numbers
2009.08.08.16.11
***********************************************************/

#include <stdio.h>

int checkZeroes(int *p_number, int digits);
int isPalindrome(int number);
int numberOfDigits(float number);
int powTen(int exponent);

int main()
{
   int i,           /* Controls outer loop */
       j,           /* Controls inner loop */
       largest = 0, /* Largest palindrome product of 2 three-digit numbers */
       product;     /* Product of every combination of 2 three-digit numbers */

   printf("\n\n\nI will now calculate the largest palindrome product of 2 three-digit numbers.");

   for(i = 100; i <= 999; i++)
   {
      for(j = 100; j <= 999; j++)
      {
         product = i * j;

         if(isPalindrome(product) && product > largest)
         {
            largest = product;
            printf("\n%d x %d = %d", i, j, product);
         }
      }
   }

   printf("\n\nThe answer is %d.\n\n\n", largest);

   return 0;
}

int isPalindrome(int number)
{
   int digits,      /* Number of digits in the integer */
       first,       /* Digit of the highest place value */
       success = 1; /* True if number is a palindrome */

   digits = numberOfDigits(number);

   while(digits > 1 && success == 1)   
   {
      first = number;
      while(first > 9)
         first *= .1;

      if(first == number % 10)
      {
         success = checkZeroes(&number, digits); /* Checks for leading zero */
         number -= first * powTen(digits - 1);   /* Removes leftmost */
         number *= .1;                           /* Removes rightmost */
      }
      else
         success = 0;

      digits = numberOfDigits(number);
   }

   return success;
}

int numberOfDigits(float number)
{
   int digits = 0;

   while(number >= 1)
   {
      number *= .1;
      digits++;
   }

   return digits;
}

int powTen(int exponent)
{
   int base = 1,
       i;

   for(i = 1; i <= exponent; i++)
      base *= 10;

   return base;
}

int checkZeroes(int *p_number, int digits)
{
   int palindrome = 1,     /* True if number is still a palindrome */
       second = *p_number; /* Digit of the second highest place value */

   while(second > 99)
      second *= .1;
   second %= 10;

   if(second == 0)
   {
      if(*p_number % 100 / 10 == 0)
      {
         *p_number += powTen(digits - 2); /* Adds 1 to the second highest place value */
         *p_number += 10;                 /* Adds 1 to the second lowest place value */
      }
      else
         palindrome = 0;
   }

   return palindrome;
}
