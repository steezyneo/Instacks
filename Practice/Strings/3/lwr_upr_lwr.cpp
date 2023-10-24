#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, newStr;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        char currentChar = str[i];

        if (isalpha(currentChar)) {
            if (islower(currentChar)) {
                newStr += toupper(currentChar);
            } else {
                newStr += tolower(currentChar);
            }
        } else {
            newStr += currentChar; 
        }
    }

    cout << newStr;
}
