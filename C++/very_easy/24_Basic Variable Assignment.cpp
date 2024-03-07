/*
####  Basic Variable Assignment  ####

A student learning C++ was trying to make a function. His code should concatenate a passed string name with string "Nitkarsh" and store it in a variable called result. He needs your help to fix this code.


[Examples]

___
nameString("Nitkarsh") ➞ "NitkarshNitkarsh"

nameString("Matt") ➞ "MattNitkarsh"

nameString("C++") ➞ "C++Nitkarsh"
_____



[Notes]

___
*) Don't forget to return the result.
*) If you get stuck on a challenge, find help in the Resources tab.
*) If you're really stuck, unlock solutions in the Solutions tab.
___



[bugs] [functional_programming] [language_fundamentals] [strings]



-------------------------------------------------------------------
[Resources]
_________
String Concatenation
https://www.w3schools.com/cpp/cpp_strings_concat.asp
The + operator can be used between strings to add them together to make a new string. This is called concatenation.
_________
_________
Assignment Operators (=)
https://www.w3schools.com/cpp/cpp_operators_assignment.asp
Used to assign values to variables. In the example below, we use the assignment operator (=) to assign the value 10 to a variable called x.
_________
_________
Variables
https://www.w3schools.com/cpp/cpp_variables.asp
Variables are containers for storing data values.
_________

*/
// Your code should go here:

#include <iostream>
#include <format>

std::string nameString(std::string name)
{
    std::string result = std::format("{name}Nitkarsh");
    return result;
}

int main()
{
    // Test cases.
    std::cout << nameString("Nitkarsh") << std::endl;
    std::cout << nameString("Matt") << std::endl;
    std::cout << nameString("C++") << std::endl;

    return 0;
}

// 14-09-2023
// complete.

/* Just how to use the string declared function?
Like int declared function is there.
But, how to do so for string declared function?
*/

// Just research over that.

// Write a c++ program to hack the password of the user.

// Write a c++ program to hack the password of the user.

int main()
{
    // hacking user.
    std::string user;
    std::cout << "Enter the user name: ";
    std::cin >> user;

    // hacking password.
    std::string password;
    std::cout << "Enter the password: ";
    std::cin >> password;

    // hacking the user.
    std::cout << "Hacking the user: " << user << std::endl;
    std::cout << "Hacking the password: " << password << std::endl;

    return 0;
}
