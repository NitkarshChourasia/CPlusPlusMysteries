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

bool isSeven(int x)
{
    return x == 7;
}

int main()
{
    // Test cases.
    std::cout << std::boolalpha << isSeven(4) << std::endl;
    std::cout << std::boolalpha << isSeven(9) << std::endl;
    std::cout << std::boolalpha << isSeven(7) << std::endl;

    return 0;
}

// 13-09-2023
// complete.