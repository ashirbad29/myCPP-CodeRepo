#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v = {3, 4, 5, 6, 6, 6, 7, 8};

	// Lower Bound
	// it returns an iterator pointing to the first element in the list
	// which is not less then the value
	// works in O(log n)
	auto lb = lower_bound(v.begin(), v.end(), 6);

	// Upper Bound
	// It returns an iterator pointing to the first element greater then the given value
	// works in O(log n)
	auto ub = upper_bound(v.begin(), v.end(), 6);

	// we can get the frequency fo the value by pointer arithmatic
	cout << ub - lb << endl; // 3

	return 0;
}