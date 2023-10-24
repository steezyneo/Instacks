#include<iostream>

using namespace std;

int main(){
    int n,i,t,j;
    
    cin>>n;

    int a[n], b[n], c[2*n];
    
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
        cin>>b[i];
    
    for(i=0; i<n; i++){
       c[i] = a[i];
    } 
    for(i=0; i<n; i++){
       c[n+i] = b[i];
    } 
    
    for(i=0; i<(2*n); i++){
        for(j=i+1; j<(2*n); j++){
            if(c[i]<c[j]){
                t = c[i];
                c[i] = c[j]; 
                c[j] = t;
            }
        }
    }

    for(i=0; i<2*n; i++)
        cout<<c[i]<<" ";
}