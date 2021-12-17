#include <iostream>

using namespace std;

class Complex{
    int a, b;
    public:
    Complex(){
        a = 0;
        b = 0;
    }
    Complex(int x, int y){
        a = x;
        b = y;
    }
    Complex(int x){
        a = x;
        b = 0;
    }
    void display()
    {
        cout << "The number is " << a << " and " << b << endl;
    }
};

int main()
{
    Complex c1(4, 6);
    c1.display();

    Complex c2(5);
    c2.display();

    Complex c3;
    c3.display();

    return 0;
}