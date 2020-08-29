#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s1("hello");
	string s2 = "hello world";
	string s3(s2);
	string s0;
	if(s0.empty()) {
		cout << "empty string" << endl;
	}

	s0.append("c++ is op");
	cout << s0 << endl;

	// Remove and erase all the content of a string
	s0.clear();
	cout << s0.length() << endl;

	// comparing two string
	// if strigs are equal it returns 0
	s0 = "Mango";
	s1 = "Apple";
	cout << s1.compare(s0) << endl;

	// overloaded operator
	if(s0 > s1) {
		cout << "greater" << endl;
	}

	// Find substring
	string str = "i love apples";
	int index = str.find("apples");
	cout << index << endl;

	// removing an word from the string
	str.erase(index, 6);
	cout << str << endl; // i love

	return 0;
}