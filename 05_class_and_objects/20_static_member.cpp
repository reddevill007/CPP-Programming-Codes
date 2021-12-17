#include <iostream>

using namespace std;

class Employee{
    // static data member
    static int count; // By default it is 0 untill initialized and will be initialized outside the class
    int id;
    public:
        void setData(void){
            cout<<"Enter the id : ";
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of this employee is : "<<id<<" and this is employee number "<<count<<endl;
        }
        static void getCount(void){
            // cout<<id; // Throws error as only static variable can be used
            cout<<"The value of count  is : "<<count<<endl;
        }
};

int Employee :: count = 1000; // can be initialized here

int main()
{
    Employee saurabh, x, y;

    
    // saurabh.id = 1;
    // saurabh.count = 1;   // can not do this as id & count are private

    saurabh.setData();
    saurabh.getData();
    Employee::getCount();  // static functions can be accessed using class_name :: static_function_name();

    x.setData();
    x.getData();
    Employee::getCount();

    y.setData();
    y.getData();
    Employee::getCount();
    
    return 0;
}