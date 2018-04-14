#include <iostream>

using namespace std;

class Person {
public:
    Person() {
        cout << "Person constructor executed!" << endl;
    }
    ~Person() {
        cout << "Person destructor extecuted!" << endl;
    }
};

int main(int argc, char** argv)
{
    Person p;
}
