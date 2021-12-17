#include <iostream>
using namespace std;

//Class definition with private and public members
class Student
{
private:
    int rNo;
    float perc;

public:
    //constructor
    Student(int r, float p)
    {
        rNo = r;
        perc = p;
    }

    //function to read details
    void read(void)
    {
        cout << "Enter roll number: ";
        cin >> rNo;
        cout << "Enter percentage: ";
        cin >> perc;
    }

    //function to print details
    void print(void)
    {
        cout << endl;
        cout << "Roll number: " << rNo << endl;
        cout << "Percentage: " << perc << "%" << endl;
    }
};

//Main code
int main()
{
    //reading roll number and percentage to initialize
    //the members while creating object

    cout << "Enter roll number to initialize the object: ";
    int roll_number;
    cin >> roll_number;

    cout << "Enter percentage to initialize the object: ";
    float percentage;
    cin >> percentage;

    //declaring and initialize the object
    struct Student std(roll_number, percentage);

    //print the value
    cout << "After initializing the object, the values are..." << endl;
    std.print();

    //reading and printing student details
    //by calling public member functions of the structure
    std.read();
    std.print();

    return 0;
}
