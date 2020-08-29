/* Given a  Set of N numbers find the subset whose sum is S */
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> set = {2, 1, 5, 4};
	int n = set.size();
	int s = 10; // target sum

	// in a set of n numbers there can be 2^n - 1 subsets possible
	int totalSets = (1 << n) - 1;

	// traversing all possible subsets
	for(int mask = 0; mask <= totalSets; mask++) {
		int sum = 0;
		// traversing each bit of a subset
		for(int i = 0; i < n; i++){
			// check the jth bit if it is set or not
			if(mask & (1 << i)) sum += set[i];
		}
		if(sum == s) {
			puts("YES");
			return 0;
		}
	}
	puts("NO");	
	return 0;
}