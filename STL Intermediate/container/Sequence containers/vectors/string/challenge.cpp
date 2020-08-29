#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;

string extractTokenAtKey(string str, int key) {
	// converting string to char* 
	// c_str returns a const char* that points to a null-terminated string
	char* s = strtok((char*)str.c_str(), " ");

	while(key > 1) {
		s = strtok(NULL, " ");
		key--;
	}
	return (string)s;
}

int makeNumeric(string str) {
	
}

bool compareAsNumeric(pair<string, string> p1, pair<string, string> p2) {
	return makeNumeric(p1.second) < makeNumeric(p2.second);
}

int main() {
	int n;
	cin >> n;

	string a[n];
	for (int i = 0; i < n; i++) {
		getline(cin, a[i]);
	}

	int key;
	cin >> key;

	vector<pair<string, string>> stringPair;
	for (int i = 0; i < n; i++) {
		pair p = make_pair(a[i], extractTokenAtKey(a[i], key));
		stringPair.push_back(p);
	}
	return 0;
}