#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
	map <string, int> m;

	// 1. insert
	// insert method takes a pair as argument
	m.insert(make_pair("mango", 100));

	// using the bracket operator
	m["orange"] = 200;
	// it will make the key orange and insert the value 200

	// another method for inserting
	m.insert( {"pomogranate", 400} );
	m.insert( {"lime", 1} );

	// search
	// find method returns an iterator or a constant iterator
	// which refers to the position where the key is present int the map
	auto it = m.find("orange");
	cout << (*it).first << " " << it->second << endl;

	// for each loop
	for (auto x: m) {
	cout << x.first << " " << x.second << endl;
	}

	// deletion
	m.erase("lime");

	
	return 0;
}