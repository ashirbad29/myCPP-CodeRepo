#include <iostream>
using namespace std;

int main() {
	 // stack
	int score = 100;

	//heap
	int *heap_score = new int;
	// heap_score will get allocated on heap

	// raallocate
	delete heap_score;

	return 0;
}