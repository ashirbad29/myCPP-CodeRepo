#include <iostream>
#include <queue>
using namespace std;

int main() {
	// by default it is a min heap
	priority_queue<int> p;
	p.push(4); // O(long)
	p.push(15);
	p.push(9);
	p.push(1);
	p.push(8);

	while (!p.empty()) {
		cout << p.top() << " ";
		p.pop();
	}
	cout << "\n";

	// MIN HEAP
	priority_queue<int, vector<int>, greater<int>> minHeap;
	minHeap.push(5);
	minHeap.push(45);
	minHeap.push(12);
	minHeap.push(3);
	minHeap.push(6);

	while (!minHeap.empty()) {
		cout << minHeap.top() << " ";
		minHeap.pop();
	}
	cout << "\n";
	return 0;
}