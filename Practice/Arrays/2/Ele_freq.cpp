#include<iostream>

using namespace std;

int main(){
    int n,i,j,k=0;
    cin>>n;
    int a[n],c=1, f[n];

    for(i=0; i<n; i++)
        cin>>a[i];
    
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i] == a[j]){
                c++;
                a[j] = -1;
            }//if
        }//inner for
        if(a[i] != -1){
            f[k++] = a[i];
            f[k++] = c;
        }//if
        c=1;
    }//outer-for

    for(i=0,j=1; i,j<k; i+=2,j+=2)
        cout<<f[i]<<" "<<f[j]<<endl;
        

    return 0;
}//StezZ