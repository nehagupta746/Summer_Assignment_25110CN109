#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, digits = 0;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    // Count digits
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits^digits
    temp = n;
    while (temp > 0) {
        int ld = temp % 10;
        sum += pow(ld, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}