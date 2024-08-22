#include <iostream>
using namespace std;

class Basic
{
public:
    string name;
    string color;
};

int main()
{
    // object created on the stack
    Basic obj;
    obj.name = "Testing";
    obj.color = "Black";
    cout << obj.name << ":" << obj.color << endl;

    // object created on the heap
    Basic *object = new Basic();
    object->name = "Testing Two";
    object->color = "White";
    cout << object->name << ":" << object->color << endl;

    return 0;
}