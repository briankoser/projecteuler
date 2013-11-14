=begin
Brian Koser
2010.08.21.17.25
Project Euler - Problem 6
   The sum of the squares of the first ten natural numbers is,
   1^(2) + 2^(2) + ... + 10^(2) = 385

   The square of the sum of the first ten natural numbers is,
   (1 + 2 + ... + 10)^(2) = 55^(2) = 3025

   Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

   Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
=end

squareOfSum = 0
sumOfSquares = 0

1.upto(100) { |i|
   squareOfSum += i
}

squareOfSum **= 2

print squareOfSum.to_s + " \n"

1.upto(100) { |i|
   sumOfSquares += i**2
}

print sumOfSquares.to_s + " \n"

print "The difference between the sum of the squares and the square of the sum is " + (squareOfSum - sumOfSquares).to_s + ".\n"