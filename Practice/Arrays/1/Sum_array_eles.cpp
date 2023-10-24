#include<iostream>

using namespace std;

int main(){
    int n, i, sum=0;
    cin>>n;
    int a[n];

    if(n<=0)
        return 1;

    for(i=0; i<n; i++){
        cin>>a[i];
        sum += a[i];
    }

    cout<<sum;
    
    return 0;
}