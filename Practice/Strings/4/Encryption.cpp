#include<iostream>

using namespace std;

int main(){
    string str, enc="";
    getline(cin, str);

    for(int i=0; i<str.length(); i++)
        if(!isdigit(str[i])){
            if(str[i] == 'A' or str[i] == 'a')
                enc += '!';
            else if(str[i] == 'b')
                enc += "@@";
            else if(str[i] == 'c')
                enc += "!!!";
        }
        else{
            cout<<"None";
            break;
        }
    
    cout<<enc;

}