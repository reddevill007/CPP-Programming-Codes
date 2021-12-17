#include <iostream>

using namespace std;

class Number
{
    int a;

public:
    Number() { a = 0; }

    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)
    {
        cout<<"Copy constructor called"<<endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    // Copy constructor
    Number z1(x);
    z1.display();

    z2 = z; // copy contructor not called as declared before
    z2.display();

    Number z3 = z; // copy contructor invoked
    z3.display();
    // When no copy constructor is there then compiler create one
    return 0;
}