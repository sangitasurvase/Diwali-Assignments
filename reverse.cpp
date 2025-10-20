#include <iostream>
using namespace std;

int main() {
    int n, reversed = 0, digit;

    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0) {
        digit = n % 10;               
        reversed = reversed * 10 + digit; 
        n = n / 10;                   
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}
