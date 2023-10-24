#include <iostream>

using namespace std;


int fact(int n) {
    int fact = 1;
    while (n > 0) {
        fact = fact * n;
        n--;
    }
    return fact;
}

int main() {
    int num, f = 0, temp;

    cin >> num;
    temp = num;

    while (temp > 0) {
        int digit = temp % 10; 
        f += fact(digit);      
        temp /= 10;           
    }

    if (f == num) {
        cout << "Strong Number";
    } else {
        cout << "Not a Strong Number";
    }

    return 0;
}
