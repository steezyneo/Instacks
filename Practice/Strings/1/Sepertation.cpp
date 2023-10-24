#include <iostream>
#include <string>

using namespace std;

int main() {
    int i;
    string str;
    
    getline(cin, str);
    
    int l = str.length();
    
   for(i=0; i<l; i++)
        cout<<str[i]<<"  ";

    return 0;
}
