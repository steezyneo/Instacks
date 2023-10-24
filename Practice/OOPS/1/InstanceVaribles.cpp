#include<iostream>

using namespace std;

class Inc
{
    int num;
public:
    Inc(int n){
        num =n ;
    }  

    int increment(){
       return num++;
    }
    void display(){
        cout<<num<<endl;
    }
    
};

int main(){
    int num;
    cin>>num;

    Inc obj1(num);
    obj1.increment();
    obj1.display();

    Inc obj2(num);
    obj2.display();

}