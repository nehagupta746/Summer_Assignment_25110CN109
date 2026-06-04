#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter range: ";
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        int n = i;
        int sum = 0, ld;

        while (n > 0) {
            ld = n % 10;
            sum += ld * ld * ld;
            n /= 10;
        }

        if (sum == i)
            cout << i << " ";
    }

    return 0;
}