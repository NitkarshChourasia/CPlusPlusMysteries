/*
####  Inches to Feet  ####

Create a function that accepts a measurement value in inches and returns the equivalent of the measurement value in feet.


[Examples]

___
inchesToFeet(324) ➞ 27

inchesToFeet(12) ➞ 1

inchesToFeet(36) ➞ 3
_____



[Notes]

___
*) If inches are under 12, return 0.
*) 12 inches = 1 foot.
___



[language_fundamentals] [math]



-------------------------------------------------------------------
[Resources]
_________
How to Convert Inches to Feet
https://www.wikihow.com/Convert-Inches-to-Feet
Converting inches to feet is quick and easy once you know how to do it! The basics to remember are that there are 12 inches in one foot, so you can get from inches to f …
_________
_________
Convert Inches to Feet
https://www.unitconverters.net/length/inches-to-feet.htm
Enter values in calculator to convert inch [in] to foot [ft], or vice versa.
_________
_________
Inches to Feet Conversion
https://www.rapidtables.com/convert/length/inch-to-feet.html
Enter the length in inches (″) and press the Convert button.
_________

*/
// Your code should go here:

#include <iostream>

int inchs2Feets(int inches);

int main()
{

    // Initialising variable
    int inches;

    // Print inches input prompt
    std::cout << "Please enter inches: ";
    // Take inches input
    std::cin >> inches;

    std::cout << inchs2Feets(inches) << std::endl;
}

int inchs2Feets(int inches)
{
    if (inches >= 12)
    {
        return inches / 12;
    }
    else
    {
        return inches;
    }
}

// TODO: string interpolation for feets and inches
// TODO: testing should be done for all the C++ programs not only this program
