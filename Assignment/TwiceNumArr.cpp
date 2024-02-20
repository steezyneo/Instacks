#include<iostream>

using namespace std;

int twicenum(int arr[]){
    int i,j,count=0;
    for(i=0; i<=sizeof(arr); ++i){
        for(j=i+1; j<=sizeof(arr); ++j){
            if (arr[i] == arr[j])
                return arr[i];
        }
    }
}

int main(){
    int arr[] = {4,3,2,7,8,3,1,5};
    cout << twicenum(arr);
}