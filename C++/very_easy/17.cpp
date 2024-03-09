/*
####  Less Than 100?  ####

Given two numbers, return true if the sum of both numbers is less than 100. Otherwise return false.


[Examples]

___
lessThan100(22, 15) ➞ true
// 22 + 15 = 37

lessThan100(83, 34) ➞ false
// 83 + 34 = 117

lessThan100(3, 77) ➞ true
_____



[Notes]

N/A


[language_fundamentals] [math] [validation]



-------------------------------------------------------------------
[Resources]
_________
Built-in Operators, Precedence and Associativity
https://docs.microsoft.com/en-us/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=vs-2019
The C++ language includes all C operators and adds several new operators. Operators specify an evaluation to be performed on one or more operands.
_________

*/
// Your code should go here:

#include <iostream>
bool lessThan100(int x, int y);

// ? Why int is used in the main and not anything else?
// like void, bool, etc,...
int main()
{
    // Initialising varibles
    int x, y;
    // Taking num1 from user
    std::cout << "Enter num1: ";
    std::cin >> x;

    // Taking num2 from user
    std::cout << "Enter num2: ";
    std::cin >> y;

    // Output bool flag as str
    std::cout << std::boolalpha;

    // Print results
    std::cout << lessThan100(x, y) << std::endl;
}

bool lessThan100(int x, int y)
{
    return x + y < 100;
}