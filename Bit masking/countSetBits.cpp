#include <iostream>
using namespace std;

int countBits(int n) {
	int count = 0;
	while(n > 0) {
		count += (n & 1);      // 
		n = n >> 1;            // right shift by 1 bit
	}
	return count;
}

int countBitsFast(int n) {
	// Time Complexity = O ( no of setBits )

	int count = 0;
	while(n) {
		count++;
		n = n & (n-1);   // Removes the last setBit
	}
	return count;
}

int main() {
	int n = 13;
	cout << countBits(n) << endl;
	cout << countBitsFast(n) << endl;
	return 0;
}