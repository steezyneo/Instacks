#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int f=0;

    for(int i=0; i<str.length(); i++)
        for(int j=i+1; j<str.length(); j++)
            if(str[i]==str[j]){
                f=1;
                break;
            }

    if(f>0)
        cout<<"no Heterogram";
    else
        cout<<"Heterogram";
      
}
