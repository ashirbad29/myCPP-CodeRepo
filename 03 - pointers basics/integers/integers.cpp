#include<iostream>
using namespace std;

int main() {
	// 1 byte is of 8 bits
	cout << sizeof(int)*8 <<" bits" << endl;

	cout << sizeof(long long int) * 8 <<" bits"<< endl;  //8 bytes 64 bits

	cout << sizeof(int16_t)*8 <<" bits" << endl;

	cout << sizeof(int32_t) * 8 << " bits" << endl;

	cout << sizeof(int64_t) * 8 << " bits" << endl;

	// binary to decimal
	// We have to specify 0b before the number for binary
	int var = 0b00000110;
	cout << var << endl; //6

	// hexadecimal
	// 0x for hexadecimal values
	int hex = 0x16;
	cout << hex << endl; //22

	return 0;
}