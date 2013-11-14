=begin
Brian Koser
2010.08.27.18.32
Project Euler - Problem 10

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
=end

MaxPrime = 2000000
primes = [2]
primeSum = 2

3.upto(MaxPrime) { |i|
   isPrime = true
   j = 0
   
   while primes[j] <= Math.sqrt(i) and j < primes.length and isPrime == true
      if i % primes[j] == 0
         isPrime = false
      end
      j += 1
   end
   
   if isPrime == true
      primes << i
      primeSum += i
   end
}

puts "\nThe sum of all the primes below #{MaxPrime} is #{primeSum}.\n"