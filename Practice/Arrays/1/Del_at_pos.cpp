#include<iostream>

using namespace std;

int main(){
    int n, i, pos,t;
    cin>>n;
    int a[n];

    
    for(i=0; i<n; i++)
        cin>>a[i];
    
    cin >>pos;

    if(pos > n){
        cout<<"Not Possible";
        return 1;
    }
        

    for (i = pos-1; i < n - 1; i++){
        a[i] = a[i + 1];
        pos++;
    }

    for(i=0; i<n-1; i++)
        cout<<a[i]<<" ";

    return 0;
}