#include<iostream>

using namespace std;

int main(){
    int n,c=0;
    cin>>n;

    if(n>1){
        int a[n];
        for (int i = 0 ;i < n;i++)
            cin>>a[i];
        
        int sum;
        cin>>sum;

        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                if(a[i]+a[j] == sum)
                    c++;
        
        cout<<c;   
    }
}