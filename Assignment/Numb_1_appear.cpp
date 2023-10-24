#include<iostream>

using namespace std;

int main(){
    int num, i, t, l, c=0;
    cin>>num;
    
    for(i=1; i<=num; i++){
        t=i;
        while(t>0){
            l=t%10;
            if(l==1)
                c++;
            t/=10;
        }//while
    }//for
    cout<<c;
}
