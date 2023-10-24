#include<iostream>

using namespace std;

int main(){
    int n,i,j,t;
    cin>>n;
    int a[n];

    if(n<=0)
        return 1;
    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<n; i++)
        for(j=i; j<n; j++)
            if(a[i]<a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }

    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    
    return 0;
}