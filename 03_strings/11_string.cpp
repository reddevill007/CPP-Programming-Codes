#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // Different type to declare str
    string str;
    string str1(5, 'n');
    string str2 = "SaurabhPandey";
// ==============================================================
    // String with spaces
    // getline(cin, str);
    // cout<<str<<endl;

// ==============================================================
    // Append of string
    // string s1 = "fam";
    // string s2 = "ily";

    // s1.append(s2);
    // cout<<s1<<endl;
    // // or
    // cout<<s1 + s2<<endl;

// ==============================================================
    // Clearing a string 
    string clr = "erfbhefuy fg ygdfc ifgfye gfyuegf yueg fyu";
    clr.clear();
    cout<<clr;

// ==============================================================
    // Comparing string
    // string s1 = "abc";
    // string s2 = "xyz";
    // cout<<s2.compare(s1)<<endl;

// ==============================================================
    //  Erase
    // string s1 = "nincompoop";

    // s1.erase(3, 2);
    // cout<<s1;

// ==============================================================
    // Finding string
    // string s1 = "Saurabh is good boy";
    // cout << s1.find("good");

// ==============================================================
    // Inertion of string to string
    // string s1 = "Sauarbh";
    // s1.insert(2, "lol");
    // cout<<s1;

// ==============================================================
    // length
    // cout<<s1.size()<<endl;
    // cout<<s1.length()<<endl;

// ==============================================================
    // sub str
    // string s1 = "saurabhPandey";
    // string s = s1.substr(6,4);
    // cout<<s<<endl;

// ==============================================================
    // string to integer
    // string s1 = "786";
    // int x = stoi(s1);
    // cout<<x;

    // int to string
    // int y = 345;
    // cout<<to_string(y) + "2"<<endl;.

// ==============================================================
    // shorting 
    string s1 = "fsdhdsgkyygdsfgjyhj";
    sort(s1.begin(), s1.end());
    cout<<s1<<endl;
    
    return 0;
}