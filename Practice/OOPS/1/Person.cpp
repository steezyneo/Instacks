#include<iostream>

using namespace std;

class Person
{
public:
    string name;
    int age;
    void talk(){
        cout<<"Hello I am "<<name<<endl;
        cout<<"My age is "<<age<<endl;

    }
};

int main(){
    string name;
    int age;

    cin>>name>>age;

    Person p;
    p.name=name;
    p.age=age;
    p.talk();
}