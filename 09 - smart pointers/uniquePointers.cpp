#include <iostream>
#include <string>
#include <memory>
using namespace std;

// Unique Pointers
/*
	Memory gets free as soon as scope ends
	You can not copy them
*/

class User{
public:
	User() {
		cout << "User created\n";
	}
	~User() {
		cout << "User deleted\n";
	}

	void testFunc() {
		cout << "i am a test function\n";
	}
};

int main() {

	// An empty scope
	{
		// unique_ptr<User> sam(new User());
		unique_ptr<User> sam = make_unique<User>();
		sam->testFunc();

		// We can't have more then 1 unique pointer pointing to same location
		// unique_ptr<User> another = sam; // Not allowed
	}
	cout << "outside code\n";

	{
		shared_ptr<User> tim = make_shared<User>();
		shared_ptr<User> another = tim;

		// weak pointers are like our old school pointers
		// compiler does't track these waek pointers (reference count)
		weak_ptr<User> weakTim = tim;
		// WeakTim is only a reference to tim
	}

	return 0;
}
