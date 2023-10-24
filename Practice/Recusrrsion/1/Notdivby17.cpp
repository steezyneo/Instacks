#include<iostream>

using namespace std;

int main(){
    int a, b, i, s=0;
    cin>>a;
    cin>>b;
    if(a<=0 || b<=0 || a>b)
        return 0;
    for(i=a; i<=b; i++){
        if(17 % i != 0)
            s+=i;
    }
    
    cout<<s;
    return 0;
}