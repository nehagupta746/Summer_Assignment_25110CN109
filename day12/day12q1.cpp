#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int original = n, rev = 0;

    while(n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    return original == rev;
}

int main()
{
    int n;
    cin >> n;

    if(palindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}