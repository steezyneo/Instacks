#include<iostream>
using namespace std;

int sq(int n){
    int mid,ans;
    int low = 1, high = n;
    while(low <= high){
        mid = (low + high)/2;
        if(mid*mid == n)
            return mid;
        else if(mid*mid < n){
            low = mid+1;
            ans = mid;
        }
        else 
            high = mid-1;   
    }
    return ans;
}

int main(){
    cout << sq(28);
}