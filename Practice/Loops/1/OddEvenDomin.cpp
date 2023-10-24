#include<iostream>

using namespace std;

int main(){
    int n, i, last, tmp, evendom=0, odddom=0;
    cin>>n;
    tmp = n;
    while(tmp!=0){
        last = tmp%10;
        if(last%2 == 0)
            evendom++;
        else    
            odddom++;
        tmp/=10; 
    }
    if(evendom>odddom)
        cout<<"even dominated";
    else if(odddom>evendom)
        cout<<"odd dominated";
    else
        cout<<"ideal";
    return 0;
}