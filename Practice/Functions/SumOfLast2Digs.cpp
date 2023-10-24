#include<iostream>
using namespace std;

int digits(int x){
    int l, sum=0,t;
    if (x==0) return 0;

    if(x<0)
        t=-x;
    else    
        t=x;

    while(t>0){
        l = t%10;
        sum++;
        t /= 10;
    }    
        
    return sum;
}

int Sum_last_two_dig(int x){
    int sum=0,l,t;
    int d = digits(x);
    t = x;
    if(d<2) return 0;
    else
        for(int i = d; i > d-2; i--){
            l = t%10;
            sum += l;
            t /= 10;
        }
    
    return sum;
}

int main(){
    int n;
    cin >> n;
    int sum = Sum_last_two_dig(n);

    if(n>0)
    

}