/*
####  Basketball Points  ####

You are counting points for a basketball game, given the amount of 3-pointers scored and 2-pointers scored, find the final points for the team and return that value (2 -pointers scored, 3-pointers scored).


[Examples]

___
points(1, 1) ➞ 5

points(7, 5) ➞ 29

points(38, 8) ➞ 100
_____



[Notes]

___
*) If you get stuck on a challenge, find help in the Resources tab.
*) If you're really stuck, unlock solutions in the Solutions tab.
___



[language_fundamentals] [math] [numbers]



-------------------------------------------------------------------
[Resources]
_________
Operators
https://www.w3schools.com/cpp/cpp_operators.asp
Are used to perform operations on variables and values. In the example below, we use the + operator to add together.
_________

*/
// Your code should go here:

#include <iostream>

int basketballPoints(int twoP, int threeP);

int main()
{

    // Initialising variables
    int twoP, threeP;

    // Input prompt for two pointer score
    std::cout << "Please input Two Pointer Score: " << std::endl;
    // Input from the user
    std::cin >> twoP;

    // Input prompt for three pointer score
    std::cout << "Please input Three Pointer Score: " << std::endl;
    // Input from the user
    std::cin >> threeP;

    // Print result
    std::cout << "Total score: " << basketballPoints(twoP, threeP) << std::endl;
}

int basketballPoints(int twoP, int threeP)
{

    int result = twoP * 2 + threeP * 3;
    return result;
}

// TODO
// String interpolation
// Testing the program