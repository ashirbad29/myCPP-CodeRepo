#include <iostream>
using namespace std;

int ithBit(int n, int i) {
	// extract the ith bit
	return n & (1<<i) ? 1: 0;
}

int setIthBit(int n, int i) {
	return n | (1 << i);
}

int removeBit(int n, int i) {
	int mask = 1 << i;
	return n & (~mask);
}

int main() {
	int n = 13;
	int i = 3;

	// calculate ith bit
	cout << ithBit(n, i) << endl;
	cout << setIthBit(13, 1) << endl;
	cout << removeBit(13, 2) << endl;
	return 0;
}