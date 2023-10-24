#include<iostream>
using namespace std;

int fact(int n);
int main(){
    int num, l, t, c=0;
    cin>>num;
    
    if(num<0)
        return 1;
 
    t = fact(num);
    
    while(t>0){
        l = t%10;
        if(l==0)
            c++;
        t/=10;
    }
    
    cout<<c;
    return 0;
}

int fact(int n){
    int fact=1;
    while(n>0){
        fact*=n;
        n--;
    }
    return fact;
}