#include<iostream>

using namespace std;

int main(){
    int n, i, count=0;
    cin>>n;

    for(i=1; i<=n; i++)
        if(n%i == 0)    
            count++;
    
    if(count == 2)
        cout<<"prime";
    else    
        cout<<"not prime";

    return 0;
}