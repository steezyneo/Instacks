#include<iostream>

using namespace std;

int main(){
    int n, i, pro;
    cin>>n;

    for(i=1;i<=10;i++){
        pro = n*i;
        cout<<n<<"X"<<i<<"="<<pro<<endl;
    }

    return 0;
}