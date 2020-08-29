#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
	// queue - fifo
	queue<int> q;

	for (int i = 1; i < 6; i++) {
		q.push(i);
	}

	while(!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
	return 0;
}