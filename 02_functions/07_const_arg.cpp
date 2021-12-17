#include <iostream>

using namespace std;

/* Note: Having const in the parameter will prevent 
  any change to variablve v inside the function 
*/

// void function (const int v = 0){
//        v = v*2;	// Error, you cannot change the value of v.
//        cout << v << endl;	
// }


// However this is possible:
void function (const int v = 0){
	cout << v * 2 << endl;	 // You are changing output, not the value of v.
}

int main(){
	int x = 10;
	cout << x << endl;

	function(x);

	return 0;
}
