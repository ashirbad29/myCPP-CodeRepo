#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> myints = {1, 2, 3, 4, 5, 6, 7, 8,};
	for (int i : myints) {
		cout << i << " ";
	}
	cout << "\n";

	// it works on O(n);
	partition(myints.begin(), myints.end(), [](auto x){
		return x % 2 == 0;
	});

	for (int i : myints) {
		cout << i << " ";
	}
	cout << "\n";

	return 0;
}