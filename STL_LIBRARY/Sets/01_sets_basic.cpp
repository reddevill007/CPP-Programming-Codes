/*
    <=== Ordered Set ===>
    -> Contains unique elements
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

void print(set<int> s)
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
    set<int> s; // Creating a set of integer data type
    s.insert(1);
    s.insert(8);
    s.insert(2);
    s.insert(2); // will only display 2 once while printing as it only takes unique elements
    s.insert(3);
    s.insert(4);
    s.insert(5);

    // Printing the element of set
    // 1 ==> using for each loop
    print(s);

    // 2 ==> Using for loop
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // Printing set in reverse order
    cout << "The elements of your sets in reverse order are" << endl;
    for (auto i = s.rbegin(); i != s.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // Size of set
    cout << "Size of your set is: " << s.size() << endl;

    // Custum Comparator
    set<int, greater<int>> s2; // Arranges in decending order
    s2.insert(1);
    s2.insert(2);
    s2.insert(2);
    s2.insert(3);
    cout << "The elements of your set of custom comparator are" << endl;
    for (auto i = s2.begin(); i != s2.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // Upper/Lower bound
    cout << "Upper bound of 2 is " << *s.upper_bound(2) << endl;
    cout << "Lower bound of 2 is " << *s.lower_bound(2) << endl;
    cout << "Upper bound of 3 is " << *s.upper_bound(3) << endl;
    cout << "Upper bound of 6 is " << *s.upper_bound(6) << endl; // This will return s.end() as 6 is not present inside our set
    cout << "Checking if upper bound of 6 is equal to s.end() " << (s.upper_bound(6) == s.end()) << endl;

    // Erasing the elements in our set
    print(s);
    s.erase(2);
    s.erase(s.end());
    print(s);

    return 0;
}