#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter any number: ";
    cin >> num;

    cout << "Input: " << num << endl
         << "Output: "
         << (num % 2 == 0 ? "Even" : "Odd");

    return 0;
}