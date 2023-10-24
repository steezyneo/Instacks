#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    
    getline(cin, str);
    
    int i,wc=0,l = str.length();
    
    for(i=0; i<l; i++)
        if(str[i] == ' ')
            wc++;
    wc++;
    
    cout << wc;
    return 0;
}
