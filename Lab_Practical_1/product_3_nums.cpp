#include <iostream>
using namespace std;

int main()
{

    int num1, num2, num3;

    cout << "Enter any three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << "Input: " << num1 << " " << num2 << " " << num3 << endl
         << "Output: Product = " << num1 * num2 * num3;

    return 0;
}