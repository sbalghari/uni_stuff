
/* A C++ Program that takes 2 numbers from the user and prints their sum, difference,
product and division. */

#include <iostream>

using namespace std;

int main(){
     // Declare required variables
     float num1, num2;

     // Print welcome text
     cout << "Welcome!" << endl
          << "This program calculates addition, "
          << "subtraction, multiplication and division.\n\n";

     // Get the first number
     cout << "Enter the first integer value: ";
     cin >> num1;

     // Get the second number
     cout << "Enter the second integer value: ";
     cin >> num2;

     // Output the results
     cout << "\nYou've entered " << num1 << " and " << num2 << endl
          << "\nAddition of " << num1 << " and " << num2 << " is " << num1 + num2 << endl
          << "Subtraction of " << num1 << " and " << num2 << " is " << num1 - num2 << endl
          << "Multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 << endl
          << "Division of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;

     return 0;
}