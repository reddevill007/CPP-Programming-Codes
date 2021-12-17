#include <iostream>

using namespace std;

class Simple{
    int data1;
    int data2;
    public:
        Simple(int a = 5, int b = 9){
            data1 = a;
            data2 = b;
        }
        void printData();
};

void Simple :: printData(){
    cout<<"The value of data is "<<data1<<" and "<<data2<<endl;
}

int main()
{
    Simple s(1,4);
    s.printData();

    Simple s1;
    s1.printData();

    Simple s2(5);
    s2.printData();
    return 0;
}