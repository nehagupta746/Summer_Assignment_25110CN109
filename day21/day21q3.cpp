#include <iostream>
using namespace std;

int main() {

    char str[100];

    cin >> str;

    int vowels = 0;
    int consonants = 0;


    for(int i=0; str[i]!='\0'; i++) {

        char ch = str[i];

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {

            vowels++;
        }

        else {
            consonants++;
        }
    }


    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants;


    return 0;
}