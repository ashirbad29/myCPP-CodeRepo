#include<iostream>
using namespace std;

int main() {
	int a[3];
	*a = 4;
	int *b = a;
	b++;
	*b = 5;
	*(b++); // 5 + 1
	cout << a[0] << endl;
	cout << a[1] << endl;
	return 0;
}