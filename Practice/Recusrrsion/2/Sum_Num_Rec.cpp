#include<iostream>

using namespace std;

int Sum_of_nums(int n){
    if(n==0)
        return 0;
    return n+Sum_of_nums(n-1);
}

int main(){
    int num;
    cin>>num;

    cout<<Sum_of_nums(num);
    
    return 0;
}