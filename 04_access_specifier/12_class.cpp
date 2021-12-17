#include <iostream>

using namespace std;

class Employee
{
    // These members can only be accesed by class function
    private:
        int a, b, c;
    
    public:
        int d, e;
        void setData(int a1, int b1, int c1);  // Declaration

        void getData(){
            cout<<"The value of a is : "<<a<<endl;
            cout<<"The value of b is : "<<b<<endl;
            cout<<"The value of c is : "<<c<<endl;
            cout<<"The value of d is : "<<d<<endl;
            cout<<"The value of e is : "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
    d = 34;
    e = 87;
}

int main()
{
    Employee Saurabh;
    // The below line will trow error as a is private
    // Saurabh.a = 55;
    Saurabh.setData(1,2,3);
    Saurabh.getData();
    return 0;
}