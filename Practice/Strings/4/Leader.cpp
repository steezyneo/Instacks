#include<iostream>

using namespace std;

int main(){
    int n,p=0;
    cin>>n;
    int a[n],b[p];

    for(int i=0; i<n; i++)
        cin>>a[i];

    if(n == 0){
        cout<<"No participants";
        return 0;
    }

    for(int i=0; i<n; i++)
        if(a[i] > 99)
            b[p++] = a[i];

    for(int i=p/2; i<p; i++)
        cout<<b[i]<<" ";
}