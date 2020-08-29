#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> v(5);
	// size of the underlying array
	cout << v.capacity() << endl;

	for (int i = 0; i < v.size(); ++i) {
		cin >> v[i];
	}

	for (auto x: v) {
		cout << x << " ";
	}
	return 0;
}