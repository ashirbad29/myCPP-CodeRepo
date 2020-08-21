#include <iostream>
using namespace std;

void swapp(int &a, int &b) {
	int temp = move(a);
	a = move(b);
	b = move(temp);
}

string printMe() {
	return "i am print";
}

int main() {

	string&& s = printMe();

	int a = 6;
	int b = 9;
	cout << "A " << a << endl;
	cout << "b " << b << endl;

	swapp(a, b);
	
	cout << "after swap\n";
	cout << "A " << a << endl;
	cout << "b " << b << endl;


	return 0;
}