#include<iostream>

using namespace std;

int main(){
    int a,b,i,c=0,j;
    cin>>a;
    cin>>b;

    if(a<=0 || b<=0 || a>b)
        return 0;
    for(i=a; i<=b; i++){
        c=1;
        if (i <= 1) {
            c = 0;
        }
        else{
            for(j=2;j<=i;j++){
                if(i%j==0){
                        c++;
                }         
                }
                if(c==2){
                cout<<i<<" ";
            }
        }
        
    }


    return 0;
}