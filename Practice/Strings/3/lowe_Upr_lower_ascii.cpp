#include<iostream>
#include<string>
using namespace std;

int main(){
    string str, newStr;
    getline(cin, str);

    for(int i=0; i<str.length(); i++){
        char ascii = str[i];
        if(ascii > 64 && ascii < 91){
            ascii += 32;
            newStr += ascii;
        }
        else if(ascii == ' '){
            newStr += ' ';
            
        }else{
            ascii -= 32;
            newStr += ascii;
        }   
    }

    cout<<newStr;
}