#include <iostream>

using namespace std;

class Box
{
   public:
      Box() { 
         cout << "Constructor is called!" <<endl; 
      }
      ~Box() { 
         cout << "Destructor is called!" <<endl; 
      }
};

void main( )
{
   Box* myBoxArray = new Box[4];

   delete [] myBoxArray; // Delete array
}

/*
Memory Allocation ::
    ---> Many times, you are not aware in advance how much memory you will need to store particular information in a defined variable and the size of required memory can be determined at run time.

    ---> You can allocate memory at run time within the heap for the variable of a given type using a special operator in C++ which returns the address of the space allocated. This operator is called new operator.

    ---> If you are not in need of dynamically allocated memory anymore, you can use delete operator, which de-allocates memory previously allocated by new operator.


Memory Allocation for Objects ::
    ---> Objects are no different from simple data types.
*/