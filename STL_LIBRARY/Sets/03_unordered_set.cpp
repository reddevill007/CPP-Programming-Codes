/*
    <=== Unordered Set ===>
    -> Contains unique elements
    -> implemented using Hashing
    -> Elements are not in sorted order
    -> Random access is not possible, i.e you cannot get i'th element in O(1)
    -> Present in #include <unordered_set> header file

    <=== Time Complexities ===>
    -> Insertion: O(1) in avg case, O(N) in worst case
    -> Deletion: O(1) in avg case, O(N) in worst case
    -> Lower/Upper_Bound: NA
*/

#include <iostream>
#include <unordered_set>

using namespace std;

void print(unordered_set<int> s)
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
    unordered_set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(5);

    print(s);

    s.erase(2);
    s.erase(s.begin());
    print(s);
    return 0;
}