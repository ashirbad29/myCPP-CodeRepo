#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> v = {2, 4, 5, 6, 8};

	// it returns an iterator to the searched element
	auto it  = find(v.begin(), v.end(), 5);

	cout << *it <<endl;

	// using pointer arithmatic we can get the index
	int index = it - v.begin(); 

	// since it is an iterator we can loop through it
	for (auto i = it; i != v.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;
	cout << index << endl;
	return 0;
}