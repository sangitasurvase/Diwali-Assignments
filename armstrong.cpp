#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, original, digits = 0, sum = 0, temp;

    cout << "Enter a number: ";
    cin >> n;

    original = n;
    temp = n;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << "True (Armstrong Number)" << endl;
    else
        cout << "False (Not an Armstrong Number)" << endl;

    return 0;
}
