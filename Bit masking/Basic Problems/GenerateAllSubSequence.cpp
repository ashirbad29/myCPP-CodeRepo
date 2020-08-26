#include <iostream>
using namespace std;

void filterChars(string str, int no) {
	// if ( no == 0 ) {
	// 	cout << " _ _ _" << endl;
	// 	return;
	// }
	int i = 0;
	while(no > 0) {
		// check for the LSB
		no & 1 ? cout  << str[i] : cout << "";
		no = no >> 1;
		i++;
	}	
}

void subSequence(string str) {
	int n = str.length();
	int range = (1 << n) - 1;
	for(int i = 0; i <= range; i++) {
		filterChars(str, i);
		cout << endl;
	}
}

int main() {
	string str = "abc";
	subSequence(str);
	return 0;
}