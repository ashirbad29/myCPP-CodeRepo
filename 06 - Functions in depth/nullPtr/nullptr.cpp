#include <iostream>
using namespace std;
void my_func(int N) {
	cout << "calling my_func (int)";
}

void my_func(char* str) {
	cout << "calling my_func (char*)";
}
int main() {
	/* 
		nullptr is a keyword that can be used
		at all places where NULL is expected.
		Like NULL, nullptr is implicitly convertable
		to any pointer type.
		Unlike NULL nullptr is not implicitly convertible
		or comparable to integer type.
	*/
	my_func(nullptr);

	return 0;
}