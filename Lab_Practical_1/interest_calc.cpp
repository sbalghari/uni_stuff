#include <iostream>
using namespace std;

int main()
{

    double principal, rate, time;

    cout << "\t*** Simple Interest Calculator ***" << endl
         << "Enter Principal amount, rate and time in order: ";
    cin >> principal >> rate >> time;

    cout << "Input: " << principal << " " << rate << " " << time << endl
         << "Output: SI = " << principal * rate * time / 100;

    return 0;
}