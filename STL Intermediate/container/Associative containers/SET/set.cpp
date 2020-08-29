#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main() {
	// set stores unique elements
	// set uses tree based ds
	// you can't update a value in set

	int arr[] = {12, 3, 5, 6, 19};
	int n = sizeof(arr)/sizeof(arr[0]);

	set<int> s;
	for (int i = 0; i < n; i++) {
		s.insert(arr[i]);
	}

	// to delete
	s.erase(6);
	// erase also takes an iterator to the element
	//printin
	for (auto it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	return 0;
}