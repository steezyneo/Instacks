#include<iostream>

using namespace std;

int main(){
    int n,min,max,diff,i;
    int arr[n];
    cin>>n;

    if(n<2)
        return 1;

    for(i=0; i<=n; i++)
        cin>>arr[i];

    max = arr[0];
    for(i=1; i<n; i++)
        if(arr[i]>max) 
            max = arr[i];
        
    min = arr[0];
    for(i=1; i<n; i++)
        if(arr[i]<min) 
            min = arr[i];
        
    diff = max-min;
    cout<<diff;

    return 0;
}