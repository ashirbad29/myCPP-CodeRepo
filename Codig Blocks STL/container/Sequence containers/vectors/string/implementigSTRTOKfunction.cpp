// Implementation of strtok() function
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

char * mystrtoken(char* s, char delim) {
	// inut will maintain its state
	static char* input = NULL;

	// first call
	if(s != NULL) {
		input = s;
	}

	// base case - after the final token has been returned
	if (input == NULL) { 
		return NULL;
	}

	// start extracting tokens and store them in a array
	char* output = new char[strlen(input) + 1];
	int i = 0;
	for ( ; input[i] != '\0'; i++) {
		if(input[i] != delim) {
			output[i] = input[i];
		}
		else {
			output[i] = '\0';
			input = input + i + 1;
			return output;
		}
	}
	// corner case
	// the last word
	output[i] = '\0';
	input = NULL;
	return output;
}

int main() {
	char str[100] = "Today is a rainly day";

	char *s = mystrtoken(str, ' ');
	cout << s << endl;

	while(s) {
		s = mystrtoken(NULL, ' ');
		cout << s << endl;
	}
	return 0;
}