// CGPA Calculator

#include <iostream>
using namespace std;

// Function to calculate GPA from marks and credits
double calculateGPA(double marks[], double credits[], int n)
{
    double sum = 0; // To store the sum of grade points
    double tot = 0; // To store the total credits
    for (int i = 0; i < n; i++)
    {
        double grade = marks[i] / 10; // Convert marks to grade points
        sum += grade * credits[i];    // Add weighted grade points
        tot += credits[i];            // Add credits
    }
    return sum / tot; // Return the GPA
}

// Function to calculate CGPA from GPA and semesters
double calculateCGPA(double GPA[], int semesters)
{
    double sum = 0; // To store the sum of GPA
    for (int i = 0; i < semesters; i++)
    {
        sum += GPA[i]; // Add the GPA of each semester
    }
    return sum / semesters; // Return the CGPA
}

// Function to display the menu and take user input
void menu()
{
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "GPA & CGPA Calculator (Developed by Bing)" << endl;
    cout << "--------------------------------------------------------------------------\n"
         << endl;
    cout << "MENU:" << endl;
    cout << "1. Calculate GPA (Grade Point Average)" << endl;
    cout << "2. Calculate CGPA (Cumulative Grade Point Average)" << endl;
    cout << "3. Exit Application" << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "Enter your choice: ";
}

// Function to calculate and display GPA
void calculateAndDisplayGPA()
{
    int n; // To store the number of subjects
    cout << "How many subjects do you want to calculate GPA for? : ";
    cin >> n;          // Take user input
    double marks[n];   // To store the marks of each subject
    double credits[n]; // To store the credits of each subject
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the marks for the subject " << i + 1 << ": ";
        cin >> marks[i]; // Take user input
        cout << endl;
        cout << "Enter the credits for the subject " << i + 1 << ": ";
        cin >> credits[i]; // Take user input
        cout << "-----------------------------------\n\n"
             << endl;
    }
    double GPA = calculateGPA(marks, credits, n); // Call the function to calculate GPA
    cout << "\n\n\nTotal GPA: " << GPA << endl;   // Display the GPA
}

// Function to calculate and display CGPA
void calculateAndDisplayCGPA()
{
    int l; // To store the number of semesters
    cout << "How many semesters do you want to calculate CGPA for? : ";
    cin >> l; // Take user input
    cout << "\n\n"
         << endl;
    double GPA[l]; // To store the GPA of each semester
    for (int i = 0; i < l; i++)
    {
        cout << "Enter the GPA for the semester " << i + 1 << ": ";
        cin >> GPA[i]; // Take user input
        cout << "\n"
             << endl;
    }
    double CGPA = calculateCGPA(GPA, l);          // Call the function to calculate CGPA
    cout << "\n\n\nTotal CGPA: " << CGPA << endl; // Display the CGPA
}

// Main function
int main()
{
    int choice;    // To store the user choice
    menu();        // Display the menu
    cin >> choice; // Take user input
    switch (choice)
    {
    case 1:
        calculateAndDisplayGPA(); // Calculate and display GPA
        break;
    case 2:
        calculateAndDisplayCGPA(); // Calculate and display CGPA
        break;
    case 3:
        exit(0); // Exit the program
        break;
    default:
        cout << "You have entered a wrong choice. Please try again.\n"
             << endl;
        main(); // Restart the program
        break;
    }
    return 0;
}
