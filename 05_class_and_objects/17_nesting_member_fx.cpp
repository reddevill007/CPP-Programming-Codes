/*
    OOPs - Classes and objects
    
    C++ --> initially called --> C with classes by stroustroup
    class --> extension of structures (in C)
    structures had limitations
         - members are public
         - No methods
    classes --> structures + more
    classes --> can have methods and properties
    classes --> can make few members as private & few as public
    structures in C++ are typedefed
    you can declare objects along with the class declarion like this:
    class Employee{
                // Class definition
            } harry, rohan, lovish; 
    
    harry.salary = 8 makes no sense if salary is private
    
*/

// Nesting of member functions 

#include <iostream>
#include <string>

using namespace std;

class binary{
    private:
        string s;
        void chk_bin(void);
        void read(void);
        void display(void);

    public:
        void once(void);
};

void binary :: read(void){
    cout<<"Enter a binary number : ";
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<< "Incorrect binary format"<<endl;
            exit(0);
        }
        
    }
    
}

void binary :: once(void){
    chk_bin();
    read();
    display();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i)=='1')
        {
            s.at(i) = '0';
        }
        
    }
    display();
}

void binary :: display(void){
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.once();
    
    return 0;
}
