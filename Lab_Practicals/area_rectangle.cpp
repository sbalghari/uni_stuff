#include <iostream>
using namespace std;

int main()
{

    double length, width;

    cout << "Enter rectangle's length and width: ";
    cin >> length >> width;

    cout << "Input: " << length << " " << width << endl
         << "Output: Area = " << length * width;

    return 0;
}