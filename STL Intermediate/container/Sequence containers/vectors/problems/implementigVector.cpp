#include <iostream>
using namespace std;
template<typename T>
class Vector{
private:
	int currentSize;
	int maxSize;
	T *arr;

public:
	Vector() {
		currentSize = 0;
		maxSize = 1;
		arr = new T[maxSize];
	}

	void push_back(const T val) {

		if(currentSize == maxSize) {
			// array is full
			T *oldArr = arr;
			arr = new T[2*maxSize];
			maxSize *= 2;
			for (int i = 0; i < currentSize; i++) {
				arr[i] = oldArr[i];
			}
			// clr the old memory
			delete [] oldArr;
		}
		arr[currentSize] = val;
		currentSize++;
	}
	void pop_back() {
		currentSize--;
	}

	T front() const{
		return arr[0];
	}

	T back() const{
		return arr[currentSize-1];
	}

	bool empty() const{
		return currentSize == 0;
	}

	int capacity() const{
		return maxSize;
	}

	int size() const{
		return currentSize;
	}
	//overloading
	T operator [] (const int index) {
		return arr[index];
	}	
};

int main() {
	Vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	return 0;
}