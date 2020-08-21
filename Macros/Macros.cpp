#include <iostream>
using namespace std;

// My Macros
#define console_log(a) cout << a << endl;

int main() {
	/*
		Macros are piece of which is give some name.
		whenever this name is encountered byt the compiler
		the compiler replaces the naem with the actual piece
		of code. '#define' directive is used to define a macro.
	*/
	int a = 78;

	string str = "ashirbad";

	//using the macro i defined
	console_log(a);
	console_log(str);

	return 0;
} 