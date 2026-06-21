#include <iostream>
using namespace std;

int main() {

    char str[100];

    cin >> str;

    int length = 0;

    while(str[length] != '\0') {
        length++;
    }


    for(int i=0; i<length/2; i++) {

        char temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;

    }


    cout << "Reverse = " << str;

    return 0;
}