#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int sum = 0;
    int temp = n;

     if (temp < 0)
        temp = -temp;
    
    while (temp > 0) {
        sum += temp % 10; 
        temp /= 10;     
    }

    cout << "Sum of digits of " << n << " is " << sum << endl;

    return 0;
}
