/*
####  Are the Numbers Equal?  ####

Create a function that takes two integers and checks if they are equal.


[Examples]

___
isEqual(5, 6) ➞ false

isEqual(1, 1) ➞ true

isEqual(36, 35) ➞ false
_____



[Notes]

N/A


[conditions] [language_fundamentals] [logic]



-------------------------------------------------------------------
[Resources]
_________
How do I get the type of a variable?
https://stackoverflow.com/questions/11310898/how-do-i-get-the-type-of-a-variable
In C++, how does one find the type of a variable?
_________
_________
Comparison Operators
https://en.cppreference.com/w/cpp/language/operator_comparison
Operators that compare arguments.
_________
_________
C++ Conditional ? : Operator
https://www.tutorialspoint.com/cplusplus/cpp_conditional_operator.htm
Where Exp1, Exp2, and Exp3 are expressions. Notice the use and placement of the colon. The value of a ? expression is determined like this: Exp1 is evaluated. If it is …
_________

*/
// Your code should go here:
#include <iostream>

bool isEqual(int a, int b);

int main()
{

    int a, b;

    std::cout << "Please enter x: ";
    std::cin >> a;

    std::cout << "Please enter y: ";
    std::cin >> b;

    bool result = isEqual(a, b);

    std::cout << std::boolalpha;
    if (result)
    {
        std::cout << "The following is " << result << " for equality." << std::endl;
    }
    else
    {
        std::cout << "The following is " << result << " for equality." << std::endl;
    }
}

bool isEqual(int a, int b)
{
    bool result = (a == b);
    return result;
}