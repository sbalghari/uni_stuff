#include <iostream>
using namespace std;

int main()
{

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Input: " << "a = " << a << ", b = " << b << endl;

    // Swap numbers using a third variable
    int temp = a;
    a = b;
    b = temp;

    cout << "Output: " << "a = " << a << ", b = " << b << endl;

    return 0;
}