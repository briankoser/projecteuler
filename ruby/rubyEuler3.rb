=begin
Brian Koser
2010.08.21.16.04
Project Euler - Problem 3
   The prime factors of 13195 are 5, 7, 13 and 29.
   What is the largest prime factor of the number 600851475143?
=end

Max = Math.sqrt(600851475143)
i = 1
largestPrime = 1
number = 600851475143

while i < Max
   if number % i == 0
      largestPrime = i
      number /= i
   end

   i += 1
end

print "The answer is " + largestPrime.to_s + "\n"