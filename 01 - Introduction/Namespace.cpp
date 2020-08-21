#include<iostream>
using namespace std;

// A namespace is a declarative region provides scope to identifiers etc...
// here is a namespace
namespace ns1 {
	int sum(int x, int y) {
		return x + y;
	}
}

int main() {
	cout << "hello world" << endl;

	// Accessing the namespace
	cout << ns1::sum(1, 4) << endl;
	return 0;
}