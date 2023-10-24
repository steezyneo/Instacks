#include <iostream>

using namespace std;

int main() {
    int n, l, s=0;
    cin>>n;

    while(s!=1){
        while(n>0){
            l=n%10;
            s+=(l*l);
            n/=10;
        }
        n=s;
        if(s==1)
            break;
        else
            s=0;
    }
    if(s==1)
        cout<<"Happy Number";
    else    
        cout<<"UnHappy Number";
}
