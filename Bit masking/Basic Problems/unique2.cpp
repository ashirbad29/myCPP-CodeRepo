#include <iostream>
#include <vector>
using namespace std;

void findUnique(vector<int> v) {
	int res = 0;
	for(int x: v) res = res ^ x;


	// res is the xor of both unique element
	int i = 0;
	int temp = res;
	while(temp > 0) {
		if(temp & 1) break;
		i++;
		temp = (temp >> 1);
	}

	// mask
	int mask = (1 << i);
	int firstNo = 0;

	for(int x: v) if(x & mask) firstNo ^= x;	

	int secondNo = res ^ firstNo;

	cout << firstNo << endl;
	cout << secondNo << endl;
}

int main() {
	// the array contains two unique elements and rest
	// occures twice
	vector<int> v = {1, 3, 5, 6, 3, 2, 1, 2};
	findUnique(v);
	return 0;
}	