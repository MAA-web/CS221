#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Defining variables
    float num1, num2, num3;
    
    // Asking user for input
    cout<<"\nEnter the value for the first number: ";
    cin >> num1;
    cout<<"\nEnter the value for the second number: ";
    cin >> num2;
    cout<<"\nEnter the value for the third number: ";
    cin >> num3;

    // Addition
    double addition = num1 + num2 + num3;
    cout << "\nThe total sum is: " << addition;

    // Subtraction of num2 from num1
    double subtraction = num1 - num2;
    cout << "\nThe subtraction of second number from the first: " << subtraction;
    
    // Multiplication of all the numbers
    double multiplication = num1 * num2 * num3;
    cout << "\nThe multiplication of the first, second and third number: " << multiplication;

    // Dividing the two numbers
    if (num2 == 0)
    {
        cout << "\nThe value is undefined";
    } else {
        double division = num1 / num2;
        cout << "\nThe value when first number is divided by the second: " << division;
    }

    // finding remainder after converting the float values to int
    if (static_cast<int>(num3) == 0) // if the static cast of float is 0 that means that the remainder will automatically be zero so we say undefined
    {
        cout << "\nThe remainder is undefined.";
    } else {
        int remainder = static_cast<int>(num1) % static_cast<int>(num3);
        cout << "\nThe value of remainder when first number is divided by third is: " << remainder;            
    }
    
    
    return 0;
}