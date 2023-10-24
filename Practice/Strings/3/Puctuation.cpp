#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int c=0;

    for(int i=0; i<str.length(); i++){
        if(str[i] == '.' || str[i] == ',')
            c++;
    }

    cout<<c;

}