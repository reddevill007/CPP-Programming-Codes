#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    // Creating constructor
    // Constructor is a special member function with same name as that of class. It is utomatically invoked whenever an object is created
    // It is used to initialize the object of its class

    Complex(void); // constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(void)  // ===> Default constructor as it does not take any parameter
{
    a = 10;
    b = 20;
}

int main()
{
    Complex c;
    c.printNumber();

    return 0;
}

/*
    Characterstics of Constructors

    1. It should be declared in the public section of the class
    2. They are automatically invoked whenever the class is created
    3. cout statements can also be used inside constructor.
    4. Can not return value and does not have a return type.
    5. It can have default arguments.
    6. We can not reffer to their address.

*/

