// Range Based for loops
#include<iostream>
using namespace std;

int main() {
	int myNums[] = {1, 3, 4, 5, 6};

	//for each
	for (int i : myNums) {
		cout << i << endl;
	}

	// looping through a string with char pointer
	char myStr[] = "Ashirbad";

	// ch is a pointer pointing to char type memory
	for(char *ch = myStr; *ch != '\0'; ch++) {
		// Dereference ch here
		cout << *ch;
	}
	cout << '\n';

	// Range based loops to iterate strings
	for (char c: myStr) {
		if(c) cout << c;
	}
	cout << '\n';
	// if(c) is used to avoid th null char '\0';

}