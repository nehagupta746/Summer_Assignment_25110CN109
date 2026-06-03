#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int maxNum = (a > b) ? a : b;

    while (true) {
        if (maxNum % a == 0 && maxNum % b == 0) {
            cout << "LCM = " << maxNum;
            break;
        }
        maxNum++;
    }

    return 0;
}