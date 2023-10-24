#include<iostream>

using namespace std;

int main(){
    int n,pos=0,neg=0,z=0,i;
    cin>>n;


    while(n>0){
        cin>>i;
        if(i>0)
            pos++;
        else if(i==0)
            z++;
        else
            neg++;
        n--;
    }
    cout<<pos<<endl;
    cout<<neg<<endl;
    cout<<z<<endl;
   
    return 0;
}