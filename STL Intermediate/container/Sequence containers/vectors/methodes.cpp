#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> v = {1, 2, 3, 4, 5};

	// push_back() O(1)  at most of the time
	v.push_back(6);

	// pop_back() 0(1)
	v.pop_back();

	// inserting at the middle in a vector (n)
	// it takes an iterator
	v.insert(v.begin() + 3, 2, 7);

	for (auto x: v) {
		cout << x << " ";
	}
	cout << endl;

	// removin a element form middle
	v.erase(v.begin() + 3);

	for (auto x: v) {
		cout << x << " ";
	}
	cout << endl;
	
	// front element
	cout << v.front() << endl;

	// last element
	cout << v.back() << endl;
	return 0;
}