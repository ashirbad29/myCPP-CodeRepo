#include <iostream>
using namespace std;

int main() {
	// a no is odd if its last digit (lsb) is 1
	// a no is even if its last digit (lsb) is 0

	int a = 6;
	if((a & 1) == 0) cout << "even";
	else cout << "odd";
	
	// and the no with 1 if the output is zero its even, if it is one then its odd
	return 0;
}