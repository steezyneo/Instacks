#include <iostream>
#include <iomanip>
using namespace std;

class Student {
    string name;
    float marks;

public:
    Student(string s, float m) : name(s), marks(m) {
        cout << "Hello I am " << name << endl;
        cout << "My marks is " << marks  << endl;
    }
};

int main() {
    string name;
    float marks;
    cin >> name >> marks;
    Student stud(name, marks);
}
