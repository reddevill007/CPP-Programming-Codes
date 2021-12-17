#include <iostream>

using namespace std;

// Function Prototype
int sum(int a, int b);

// Can also be declared as
// int sum(int , int );

int main(){
    int num1, num2;
    cout<<"Enter first number : ";
    cin>>num1;

    cout<<"Enter second number : ";
    cin>>num2;

    cout<<"The sum is : "<<sum(num1, num2)<<endl;
    
    return 0;
}

int sum(int a, int b){
    int c = a + b;

    return c;
}