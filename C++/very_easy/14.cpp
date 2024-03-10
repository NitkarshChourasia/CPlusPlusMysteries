/*
####  Are the Numbers Equal?  ####

Create a function that returns true when num1 is equal to num2; otherwise return false.


[Examples]

___
isSameNum(4, 8) ➞ false

isSameNum(2, 2) ➞  true

isSameNum(2, "2") ➞ false
_____



[Notes]

Don't forget to return the result.


[conditions] [language_fundamentals] [numbers] [validation]



-------------------------------------------------------------------
[Resources]
_________
Check if Two Numbers Are Equal Without Using Comparison Operators
https://www.geeksforgeeks.org/check-two-numbers-equal-without-using-comparison-operators/
Check if two numbers are equal without using comparison operators.
_________
_________
Check Whether Two Integers Are Equal or Not
https://www.w3resource.com/c-programming-exercises/conditional-statement/c-conditional-statement-exercises-1.php
Check whether two integers are equal or not.
_________

*/
// Your code should go here:

#include <iostream>

// Prototype function
bool isSameNum(int x, int y);

int main()
{
    // Initialise input variables
    int a, b;
    // Ask for first input
    std::cout << "Please enter num1: ";
    std::cin >> a;
    // Ask for second input
    std::cout << "Please enter num2: ";
    std::cin >> b;

    // Print result
    std::cout << std::boolalpha;
    std::cout << isSameNum(a, b) << std::endl;
}

bool isSameNum(int x, int y)
{
    return x == y;
}

// Failed at different validation
// Failed to string interpolate the result
// Failed to press user (while loop) for taking the input from the user