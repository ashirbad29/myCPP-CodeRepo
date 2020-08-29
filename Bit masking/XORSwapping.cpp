#include <iostream>
using namespace std;

void xSwap(int& a, int& b) {
	a = a ^ b;
	b = b ^ a;
	a = a ^ b; 
}

int main() {
	int a = 5, b = 9;
	xSwap(a, b);

	cout << a << " " << b << endl;
	return 0;
}