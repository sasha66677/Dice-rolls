# DMiML
A correct dice is tossed n times. Then the number of points rolled is multiplied.
Find the number of outcomes when the resulting product has an odd number of divisors.

========================================================================================================================================================================================================================================================================================

The fallout of each face is equally probable.

The total product for n -> ∞, each face will fall out n/6 times, the final product = 1^(n/6)*2^(n/6)*…6^(n/6) = 720^(n/6 )

All divisors will be multiples of the prime numbers 1, 2, 3, 5.

If the order of the points thrown is important, i.e. [1,2] and [2,1] are different outcomes, then these are placements with repetitions, number of outcomes = 6^n
If the order of the points thrown is not important, that is, [1,2] and [2,1] are the same outcomes, then these are combinations with repetitions, the number of outcomes = (n + 5)! / (120*n!)

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Let's do an experiment on small n to find a pattern.
1. Create a function to calculate the number of divisors function countDividers(n)
2. Let's create a function for sorting through all variants of throws, where maxDepth - the number of throws, unique - whether to take into account the same outcomes.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

