#include<iostream>

using namespace std;

class Person
{
    string name;
public:
    void setname(string n){
        name = n;
    }
    void getname(){
        cout<<name<<endl;
    }
    
};

int main(){
    string name;
    cin>>name;
    Person p1;
    p1.setname(name);
    p1.getname();
}