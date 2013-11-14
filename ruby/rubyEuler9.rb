=begin
Brian Koser
2010.08.22.21.00
Project Euler - Problem 9
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^(2) + b^(2) = c^(2)

For example, 3^(2) + 4^(2) = 9 + 16 = 25 = 5^(2).

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
=end

found = false
answer = [1, 2, 3]

335.upto(999) { |c| # c must be >= 335; b and c must be smaller and still add up to 1000
   2.upto(c) { |b|
      1.upto(b) { |a|
         if a + b + c == 1000
            if a**2 + b**2 == c**2
               answer = a, b, c
            end
         end
      }
   }
}

#puts "#{answer}\n"
puts "The only Pythagorean triplet for which a + b + c = 1000 is #{answer[0]}, #{answer[1]}, #{answer[2]}.\n"
puts "The product of these numbers is #{answer[0] * answer[1] * answer[2]}.\n"