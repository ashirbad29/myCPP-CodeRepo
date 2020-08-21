#include <iostream>
#include <stack>

using namespace std;
// Implementing queue using 2 stack
template<typename T>
class Queue {
	stack<T> s1, s2;
public:
	void push(T value) {
		s1.push(value);
	}

	void pop() {
		if (s1.empty() && s2.empty()) {
			cout << "empty" << "\n";
			return;
		}

		if(s2.empty()) {
			while(!s1.empty()) {
				s2.push(s1.top());
				s1.pop();
			}
		}
		s2.pop();
	}

	T front() {
		if(s2.empty()) {
			while(!s1.empty()) {
				s2.push(s1.top());
				s1.pop();
			}
		}
		return s2.top();			
	}

	T back() {
		if (s1.empty()) {
			while(!s2.empty())
			s1.push(s2.top());
			s2.pop();
		}
		return s1.top();
	}

	int size() {
		return s1.size() + s2.size();
	}

	bool empty() {
		return (size() == 0);
	}
};



int main() {
	Queue <int> q;

	q.push(1);
	q.push(2);
	q.push(5);
	q.push(6);
	q.pop();
	q.push(7);
	cout << q.front() << endl;
	//cout << q.back() << endl;
	cout << q.size() << endl;



	return 0;
}