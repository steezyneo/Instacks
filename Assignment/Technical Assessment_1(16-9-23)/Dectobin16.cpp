#include<iostream>
using namespace std;

void decToBinary(int n){
    int binNum[16];
    int i = 0;
    
    while(n>0){
        binNum[i] = n%2;
        i++;
        n/=2;
    }
    
    for(int j=i-1; j>=0; j--)
        cout<<binNum[j];
}

int main(){
    int n;
    cin>>n;
    
    decToBinary(n);
    
}