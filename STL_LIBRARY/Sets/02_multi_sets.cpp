/*
    <=== Multi Set ===>
    -> Can contain duplicates
    -> implemented using Balanced BST
    -> Elements are in sorted order
    -> Random access is not possible, i.e you cannot get i'th element in O(1)/O(Log N)
    -> Present in #include <set> header file

    <=== Time Complexities ===>
    -> Insertion: O(Log N)
    -> Deletion: O(Log N)
    -> Lower/Upper_Bound: O(Log N)
*/

#include <iostream>
#include <set>

using namespace std;

void print(multiset<int> s)
{
    cout << "The elements of your sets are" << endl;
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2); // will display 2 as many times as it appears while printing as it can take multiple same elements
    s.insert(3);
    s.insert(3);
    s.insert(3);
    print(s);

    s.erase(2); // Will delete all the occurance of 2
    s.erase(s.find(3)); // Will delete only first occurance of 
    print(s);
    return 0;
}