#include<iostream>
using namespace std;

int absolute(int x){
    int abs;
    if(x<0)
        abs = -x;
    else
        abs = x;
    return abs;
}

int main(){
    int n;
    cin >> n;
    cout << absolute(n);
}