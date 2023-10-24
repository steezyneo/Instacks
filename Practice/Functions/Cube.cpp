#include<iostream>
#include<iomanip>
using namespace std;

double cubeofnum(double x){
    return x*x*x;
}

int main(){
    double n;
    cin >> n;
    cout << fixed << setprecision(2) << cubeofnum(n);
}