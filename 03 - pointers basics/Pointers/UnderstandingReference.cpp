#include<iostream>
using namespace std;

int main() {
	int score = 300;
	int *ptr = &score;
	cout << ptr << endl;

	// Reference
	// c++ dont allow NULL references
	// reference are prefered over pointers
	int &another_score = score;
	cout << another_score << endl;
	return 0;
}