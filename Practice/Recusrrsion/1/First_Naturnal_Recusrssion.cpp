#include<iostream>

using namespace std;

int first_n_natural(int n){
     if (n == 0) 
        return 0;

    first_n_natural(n-1);
    cout << n << " ";

    if (n != 0) 
        cout << n << " ";
}

int main(){
    int num;
    cin>>num;

    first_n_natural(num);

    return 0;
}

