#include <iostream>

using namespace std;

//  Volume of cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// volume of cube
int volume(int a)
{
    return (a*a*a);
}

// volume of cuboid
int volume(int l, int b, int h)
{
    return (l*b*h);
}

int main()
{
    cout<<"The volume of cylinder is : "<<volume(3.3,40)<<endl;
    cout<<"The volume of cube is : "<<volume(40)<<endl;
    cout<<"The volume of cuboid is : "<<volume(3,3,3)<<endl;

    return 0;
}