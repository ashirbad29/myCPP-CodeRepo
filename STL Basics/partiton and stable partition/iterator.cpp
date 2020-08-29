#include <iostream>
#include <list>
using namespace std;

template <typename ForwardIterator, typename T>
ForwardIterator listSearch(ForwardIterator start, ForwardIterator end, T key) {
	for(auto i = start; i != end; ++i) {
		if(*i == key) {
			return i;
		}
	}
	return end;
}

int main() {
	// Iterator as an entity hepls us to iterate over a container and access its data;n 
	list<int> l;
	l.push_back(4);
	l.push_back(5);
	l.push_back(1);
	l.push_back(8);
	l.push_back(9);
	l.push_back(12);

	auto it = listSearch(l.begin(), l.end(), 3);
	cout << *it << endl;
	cout << *(l.end()) << "\n";
	return 0;
}