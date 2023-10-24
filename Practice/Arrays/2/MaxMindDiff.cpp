#include<iostream>

using namespace std;

int main(){
    int n,i,max,min;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];

    max=min=a[0];

    if(n<3){
        cout<<-1<<endl;
        return -1;
    }
        

    for(i=0; i<n; i++){
        if (a[i]>max)
            max = a[i];
        if (a[i]<min)
            min = a[i];
    }

    cout<<max-min;

    return 0;
}