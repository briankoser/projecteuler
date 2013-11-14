=begin
Brian Koser
2010.08.28.22.43
Project Euler - Problem 20

n! means n × (n - 1) × ... × 3 × 2 × 1
Find the sum of the digits in the number 100!

=end

sum = 0
factorial = 100.downto(1).inject {|product, n| product * n }

while factorial >= 1
   sum += factorial % 10
   factorial /= 10
end

puts "\nThe sum of the digits in 100! is #{sum}.\n\n"