#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    getline(cin, str);

    int i;
    string newStr;

    for( i=0; i<str.length(); i++)
        if(str[i] != ' '){
            newStr += str[i];
        }
        
    cout<<newStr;
}