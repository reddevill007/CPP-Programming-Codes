#include <iostream>

using namespace std;

class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumcompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Individually declaring function as friend
    // friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator::sumcompComplex(Complex o1, Complex o2);

    // Aliter: Declaring the entire calculator class as friend
    friend class Calculator;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnum()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator :: sumcompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(3, 4);
    o2.setNumber(7, 2);

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    int resc = calc.sumcompComplex(o1, o2);

    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
    cout<<"The sum of complex part of o1 and o2 is "<<resc<<endl;

    return 0;
}