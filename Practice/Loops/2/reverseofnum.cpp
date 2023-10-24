#include<iostream>

using namespace std;

int main(){
    int n, rev=0, t, last;
    cin>>n;
    t=n;
    while(t>0){
        last = t%10;
        rev=(rev*10)+last;
        t/=10;
    }    

    cout<<rev;

    return 0;
}