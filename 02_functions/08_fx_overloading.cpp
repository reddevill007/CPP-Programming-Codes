#include <iostream>

using namespace std;

int add(int a, int b)
{
    cout << endl
         << "Using 2 arg function" << endl;
    return a + b;
}

int add(int a, int b, int c)
{
    cout << endl
         << "Using 3 arg function" << endl;
    return a + b + c;
}

int main()
{
    cout << "The sum of 3 and 6 is " << add(3, 6) << endl;
    cout << "The sum of 3, 7, and 6 is " << add(3, 7, 6) << endl;

    return 0;
}