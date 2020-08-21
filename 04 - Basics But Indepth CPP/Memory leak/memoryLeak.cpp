#include <iostream>
using namespace std;

int main() {
	//article link - https://www.geeksforgeeks.org/memory-leak-in-c-and-how-to-avoid-it/

	/*
		memory leaks happens in cpp when programmers allocates
		memory by using new keyword and forgets to dealocate
		the memory by using delete keyword;

		imp: only dynamically allocated variable can be 
		destroyed using delete operator
		trying to delete a local stack frame variable 
		will cause a run time error
	*/

	return 0;
}