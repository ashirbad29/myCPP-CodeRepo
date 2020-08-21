#include <iostream>
using namespace std;

struct user
{
	const int uId;
	const char *name;
	const char *email;
	int course_count;
};

int main() {
	user ashirbad = {69, "ashirbad", "ashirbad@gmail.com", 1};
	cout << ashirbad.email << endl;

	// create a reference to a user struct ahirbad
	user *u = &ashirbad;

	cout << (*u).email << endl;
	
	// better syntax for above code
	cout << u->email << endl;
	return 0;
}