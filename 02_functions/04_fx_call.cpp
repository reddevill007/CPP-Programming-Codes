#include <iostream>

using namespace std;

int sum(int a, int b){
    int c = a + b;

    return c;
}

// This will not swap a and b in main function
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// Call By Reference using pointer 
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call By Reference using C++ reference variable 
void swapReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    cout<<"The sum of 4 and 5 is : "<<sum(4, 5)<<endl;

    int a = 4 , b = 5;

    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    // Will not work 
    swap(a, b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    cout<<"After first swapping"<<endl<<endl;

    // This will work
    swapPointer(&a, &b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl<<endl;

    cout<<"After second swapping"<<endl<<endl;

    // This will work
    swapReference(a, b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    
    return 0;
}
