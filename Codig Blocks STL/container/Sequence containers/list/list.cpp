#include <iostream>
#include <list>
#define print(list) for(auto x: list) { cout << x << " ";}

using namespace std;

int main() {
	list<int> l;

	list<int> l1{1, 3, 2, 5, 2, 6};

	// printing the list
	print(l1);
	cout << endl;

	//sort
	cout << "Sorting" << "\n";
	l1.sort();
	print(l1);
	cout << endl;

	// reverse
	cout << "reversing :" << endl;
	l1.reverse();
	print(l1);
	cout << endl;

	// remove all occurances
	l1.remove(2);
	print(l1); cout << endl; // 6 5 3 1
	// size
	cout << l1.size() << endl;

	l.push_back(5);
	l.push_front(3);
	l.insert(l.begin(), 2);
	print(l);
	cout << endl;
	return 0;
}