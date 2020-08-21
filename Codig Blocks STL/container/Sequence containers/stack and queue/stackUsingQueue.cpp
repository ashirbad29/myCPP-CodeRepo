#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
// Implement a stack usign 2 queues
template<typename T>
class Stack {
	queue<T> q1, q2;
public:
	void push(T x) {
		q1.push(x);
	}
	void pop() {
		// Remove the last added element from q1
		// we first have to move n-1 element to q2
		// interchange the names
		if (q1.empty()) return;

		while(q1.size() > 1) {
			T element = q1.front();
			q2.push(element);
			q1.pop();
		}

		// rempve the last element
		q1.pop();

		// swap the name of q1 and q2
		swap(q1, q2);
	}

	T top() {
		while(q1.size() > 1) {
			T element = q1.front();
			q2.push(element);
			q1.pop();
		}

		T element = q1.front();
		q1.pop();
		q2.push(element);

		swap(q1, q2);

		return element;
	}

	int size() {
		return q1.size() + q2.size();
	}

	bool empty() {
		return (size() == 0);
	}
};

int main() {
	Stack<int> s;
	for (int i = 0; i < 6; ++i) {
		s.push(i);
	}

	while(!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}