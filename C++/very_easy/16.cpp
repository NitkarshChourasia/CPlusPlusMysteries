/*
####  Fix the Expression  ####

Fix the code in the Code tab so the function returns true if and only if x is equal to 7. Try to debug code and pass all the tests.


[Examples]

___
isSeven(4) ➞ false

isSeven(9) ➞ false

isSeven(7) ➞ true
_____



[Notes]

The bug can be hard to find, so look closely!


[bugs] [language_fundamentals] [validation]



-------------------------------------------------------------------
[Resources]
_________
The Conditional Operator (?:)
http://www.cplusplus.com/articles/1AUq5Di1/
Returns one of two values depending on the result of an expression.
_________

*/
// Your code should go here:

#include <iostream>

bool isSeven(int x);

int main()
{

    int x;
    std::cout << "Input a num: ";
    std::cin >> x;

    std::cout << std::boolalpha;

    std::cout << isSeven(x) << std::endl;
}

bool isSeven(int x)
{
    return x == 7;
}

// bool values like true or false are given out in small case like
// true or false
// how to and what if I want to output them as something else?
// Like in python programming languages.
// True or False or maybe anything else
// ? How to do it?