#include<iostream>

using namespace std;

int countdig(int n);

int main(){
    int n,i,pro=1,sum=0,rem,tmp,c,l;
    cin>>n;

    c = countdig(n);
    
    while(c > 2){
        l=n%10;
        pro=pro*l;
        n/=10;

        c--;
    }
    l = 0;
    while(n>0){
        l=n%10;
        sum=sum+l;
        n /=10;
    }

    if(sum == pro)
        cout<<"happy number";
    else
        cout<<"not a happy number";

    return 0;
}

int countdig(int n){
    int l, c=0, tmp;
    tmp = n;
        while(tmp!=0){
            l = tmp%10;
            c++;
            tmp=tmp/10;
        }
        return c;
    }