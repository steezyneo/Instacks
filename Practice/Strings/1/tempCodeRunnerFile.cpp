#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    
    getline(cin, str);
    
    int length = str.length();
    
    cout <<  length << endl;

    return 0;
}
