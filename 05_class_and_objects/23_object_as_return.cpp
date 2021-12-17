/*
Returning Object as argument

Syntax: 
    object = return object_name;
    
Example: In the above example we can see that the add function does not return any value since its return-type is void. In the following program the add function returns an object of type ‘Example'(i.e., class name) whose value is stored in E3. 
In this example, we can see both the things that are how we can pass the objects as well as return them. When the object E3 calls the add function it passes the other two objects namely E1 & E2 as arguments. Inside the function, another object is declared which calculates the sum of all the three variables and returns it to E3. 
This code and the above code is almost the same, the only difference is that this time the add function returns an object whose value is stored in another object of the same class ‘Example’ E3. Here the value of E1 is displayed by object1, the value of E2 by object2 and value of E3 by object3.

*/
// C++ program to show passing
// of objects to a function
 
#include <iostream>

using namespace std;
 
class Example {
public:
    int a;
 
    // This function will take
    // object as arguments and
    // return object
    Example add(Example Ea, Example Eb)
    {
        Example Ec;
        Ec.a = Ea.a + Eb.a;
 
        // returning the object
        return Ec;
    }
};
int main()
{
    Example E1, E2, E3;
 
    // Values are initialized
    // for both objects
    E1.a = 50;
    E2.a = 100;
    E3.a = 0;
 
    cout << "Initial Values \n";
    cout << "Value of object 1: " << E1.a
         << ", \nobject 2: " << E2.a
         << ", \nobject 3: " << E3.a
         << "\n";
 
    // Passing object as an argument
    // to function add()
    E3 = E3.add(E1, E2);
 
    // Changed values after
    // passing object as an argument
    cout << "New values \n";
    cout << "Value of object 1: " << E1.a
         << ", \nobject 2: " << E2.a
         << ", \nobject 3: " << E3.a
         << "\n";
 
    return 0;
}