/*
####  Esthetic Numbers  ####

A number is Esthetic if, in any base from base2 up to base10, the absolute difference between every pair of its adjacent digits is constantly equal to 1.
___
num = 441 (base10)
// Adjacent pairs of digits:
// |4, 4|, |4, 1|
// The absolute difference is not constant
// 441 is not Esthetic in base10

441 in base4 = 12321
// Adjacent pairs of digits:
// |1, 2|, |2, 3|, |3, 2|, |2, 1|
// The absolute difference is constant and is equal to 1
// 441 is Esthetic in base4
_____

Given a positive integer num, implement a function that returns an array containing the bases (as integers from 2 up to 10) in which num results to be Esthetic, or an empty array [] if no base makes num Esthetic.


[Examples]

___
esthetic(10) ➞ [2, 3, 8, 10]
// 10 in base2 = 1010
// 10 in base3 = 101
// 10 in base8 = 12
// 10 in base10 = 10

esthetic(23) ➞ [3, 5, 7, 10]
// 23 in base3 = 212
// 23 in base5 = 43
// 23 in base7 = 32
// 23 in base10 = 23

esthetic(666) ➞ [8]
// 666 in base8 = 1232
_____



[Notes]

N/A


[arrays] [loops] [numbers] 



-------------------------------------------------------------------
[Resources]
_________
Converting From Base 10 to Other Bases
https://www.youtube.com/watch?v=aeLLTOHZnIc
How do you convert from base 10 to another base?
_________
_________
std::to_string
http://www.cplusplus.com/reference/string/to_string/
Returns a string with the representation of val. The format used is the same that printf would print for the corresponding type...
_________

*/
//Your code should go here:

