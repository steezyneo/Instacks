#include<iostream>
#include<string>

using namespace std;

string strrev(string str){
    string newStr;
    for(int i=str.length()-1; i>=0; i--){
        newStr += str[i];
    }
    return newStr;
}
int main(){
    string s,ns;
    cin>>s;
    
    ns = strrev(s);
    
    int l = ns.length();
    
    for(int i=0; i<l; i++)
        cout<<ns[i]<<" ";
    
}