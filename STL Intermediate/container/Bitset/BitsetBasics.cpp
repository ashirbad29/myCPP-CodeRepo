#include <bits/stdc++.h>
using namespace std;

int main()
{
	/*
		A bitset is an array of bool but each Boolean value is not stored separately 
		instead bitset optimizes the space such that each bool takes 1 bit space only
		opeations on bitset is faster than arrya and vector
	*/

	/* Initialization */ 
	const int M = 8;

	// default constructor initializes with all 0;
	bitset<M> bset1;

	// bset is initialize with bits of 20
	bitset<M> bset(20);                // M is the size of the bitset
	cout << bset.to_string() << endl;  // 00010100

	// initalize with binary string
	bitset<M> bset3("1101");
	cout << bset3.to_string() << endl; // 00001100

	/* Basic Methods */ 
	// Count - returns no of setBits
	cout << bset3.count() << endl;
	cout << bset.count() << endl;

	// any function returns true, if atleast 1 bit 
    // is set
   	if(bset.any()) cout << "true" << endl; // ture

   	// Flip - flip all bits
   	cout << bset.flip() << endl; // 11101011

   	// Converting decimal to binay
   	cout << "Binary of 5 : " << bitset<4>(5) << endl; 

   	// Converting Binary strign to decimal
   	const string str = "1111"; // 15
   	int num = (int)bitset<4>(str).to_ulong();
   	// to_ulong() returns a long then typecasting it into int
   	cout << num << endl; // 15;

   	/* Basic Bit Manipulation */
   	bitset<4> a(string("0101"));
   	bitset<4> b(string("1010"));
   	cout << (a & b) << endl; // 0000
   	cout << (a | b) << endl; // 1111
   	cout << (a ^ b) << endl; // 1111
   	cout << (~a) << endl; // 1010
   	cout << (a << 1) << endl; //1010
   	cout << (b << 1) << endl; // 0101

	return 0;
}
