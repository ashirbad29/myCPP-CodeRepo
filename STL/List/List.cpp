#include <iostream>
#include <list>

using namespace std;

int main() {
	// lists are implemented as doubley linkd list
	// these are not contigeous like array

	list<int> myList;

	for (int i = 3; i < 10; i++) {
		myList.push_back(i);
	}

	// front
	cout << myList.front() << endl;
	cout << myList.back() << endl;

	// pop
	myList.pop_back(); // 9 got removed

	// reverse
	myList.reverse();

	for (auto x: myList) {
		cout << x << " ";
	}
	cout << endl;
	return 0;
}