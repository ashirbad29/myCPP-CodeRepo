#include <iostream>
using namespace std;

// What are Qualifiers?
//	 A qualifier is a token added to a variable which adds an extra quality, 
//	 such as specifying volatility or constant-ness to a variable. 
//	 They act like an adjective for a variable

// Types:
/* 1. Modification Qualifiers
 		-const
		-volatile
		-mutable
*/
/*
	2. Life Duration Qualifiers
		-static
		-register
		-extern
*/

// using the static keyword
void fun() {
	static int i = 0;
	i++;
	cout << i << endl;
}
int main() {

	fun(); // 1
	fun(); // 2
	fun(); // 3

	return 0;
}