#include <iostream>
using namespace std;
int addition(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    cout << addition(3, 2) << endl;
    cout << addition(-3, -6) << endl;
    cout << addition(7, 3) << endl;
    return 0;
}