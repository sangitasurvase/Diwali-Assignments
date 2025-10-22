#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;  
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int gcd_val = gcd(a, b);
    int lcm_val = lcm(a, b);

    cout << "GCD of " << a << " and " << b << " is: " << gcd_val << endl;
    cout << "LCM of " << a << " and " << b << " is: " << lcm_val << endl;

    return 0;
}
