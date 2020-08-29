#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class student {
public:
	string firstName;
	string lastName;
	int rollno;

	student(string f, string l, int no) {
		firstName = f;
		lastName = l;
		rollno = no;
	}

	bool operator == (student s) const{
		return rollno == s.rollno?true:false;
	}
};

class hashFn{
public:
	size_t operator() (const student &s) const {
		return s.firstName.length() + s.lastName.length();
	}
};

int main() {

	unordered_map<student, int, hashFn> studentMap;

	student s1("ashirbad", "behera", 12);
	student s2("dhanyabad", "behera", 14);
	student s3("ashirbad", "das", 18);
	student s4("ashish", "sharma", 011);

	// Add student - marks to hashmap
	studentMap[s1] = 100;
	studentMap[s2] = 78;
	studentMap[s3] = 40;
	studentMap[s4] = 95;

	// iterate over studentMap
	for (auto s: studentMap) {
		cout << s.first.firstName << " " << s.first.rollno << " Marks " << s.second << endl;
	}

	return 0;
}