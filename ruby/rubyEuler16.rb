=begin
Brian Koser
2010.08.28.22.43
Project Euler - Problem 16

2^(15) = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
What is the sum of the digits of the number 2^(1000)?

=end
Power = 1000

number = 2**Power
sum = 0

while number >= 1
   sum += number % 10
   number /= 10
end

puts "\nThe sum of the digits of 2^#{Power} is #{sum}.\n\n"