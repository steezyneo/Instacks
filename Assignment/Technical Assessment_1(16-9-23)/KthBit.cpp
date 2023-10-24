#include<iostream>
using namespace std;

int setk(int num, int k){
    return (num | (1<<k));
}
int main(){
    int n,k;
    cin>>n>>k;
    
    cout<<setk(n, k);
}