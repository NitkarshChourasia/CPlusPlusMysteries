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
 https://www.geeksforgeeks.org/check-two-numbers-equal-without-us
ng-comparison-operators/
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

bool isSameNum(int num1, int num2)
{
    // try
    // {
    /* code */
    if (num1 == num2)
    {
        return true;
    }
    else
    {
        return false;
    }
    // }
    // catch (const std::exception &e)
    // {
    //     // std::cerr << e.what() << '\n';
    //     cout << "Please enter int type."
    // }
}

int main()
{
    // Test cases.
    std::cout << std::boolalpha << isSameNum(4, 8) << std::endl;
    std::cout << std::boolalpha << isSameNum(2, 2) << std::endl;

    return 0;
}

// Refactoring is needed.
// 13-09-2023