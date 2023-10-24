#include <iostream>
#include <iomanip>
using namespace std;

class Person {
    string name;
    int id;

public:
    Person(string n, int i) {
        this->name = n;
        this->id = i;
        cout << "Hello I am " << n << endl;
        cout << "My id is " << i << endl;
    }
};

int main() {
    string n1,n2;
    int id1,id2;
    cin >> n1 >> id1 >> n2 >> id2;
    Person p1(n1, id1);
    Person p2(n2, id2);
}
