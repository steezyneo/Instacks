#include<iostream>
#include<string>

using namespace std;

int main(){
    string s,cs,vs;
    cin>>s;
    
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
            vs+=s[i];
        else
            cs+=s[i];
    }
    
    cout<<vs<<" "<<vs.length()<<endl;
    cout<<cs<<" "<<cs.length();
}