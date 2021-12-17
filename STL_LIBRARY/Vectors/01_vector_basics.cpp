// for more follow the link below
// https://www.cplusplus.com/reference/vector/vector/

#include <iostream>
#include <vector>

using namespace std;

template <class T>

void display(vector<T> v){
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // Both work exactly the same
        // cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
    
}

int main()
{
    // Ways to create a vector
    vector<int> v; // zero length vector

    vector<char> v2(4); // 4 length char vector
    v2.push_back('c');
    display(v2);

    vector<char> v3(v2); // 4 length char vector from v2
    display(v3);

    vector<int> v4(6, 3); // 6 element vector of 3s
    display(v4);

    int element, size;

    cout << "Enter the size of vector: ";
    cin >> size;

    // Taking the vector as an user input
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        v.push_back(element);
    }

    v.pop_back(); // Removes the last element of our vector
    display(v);

    // inserting at beggining of the vector by making iterator
    vector<int> :: iterator iter = v.begin();

    // iter is pointing to first element and insert is inserting before first element so it insret before the pointed element
    v.insert(iter, 566);
    // This will insert 5 copies of 566
    v.insert(iter, 5, 566);

    v.insert(iter + 1, 566);
    display(v);
    // Size of vector
    cout << v.size() << endl;
    

    return 0;
}