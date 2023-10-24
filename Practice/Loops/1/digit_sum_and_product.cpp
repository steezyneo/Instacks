#include<iostream>

using namespace std;

int main(){
    int n, i, last, tmp, evensum=0, oddsum=1;
    cin>>n;
    tmp = n;
    for(i=0; i<tmp; i++){
        last = tmp%10;
        if(last%2 == 0)
            evensum = evensum+last;
        else    
            oddsum = oddsum*last;
        tmp/=10; 
    }

    cout<<"Even values sum is "<<evensum;
    cout<<"\nOdd values product is "<<oddsum;
    return 0;
}