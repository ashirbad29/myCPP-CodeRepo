#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{

  // char *strtok(char *s, *delimeters)
  // returns a token on each subsequent call
  // on the first call function should be passed with
  // string argument s
  // on subsequent calls we should pass the string argument as null
  char s[100] = "Today is a rainy day";

  // if the first parameter is not null then the call is consideered as
  // the first call to strtok()
  char *ptr = strtok(s, " ");
  cout << ptr << endl;

  // if the first parameter is null then the call is considered as
  // subssequent calls to strtok() and the function continues
  // from where it left in previous invocation
  while (ptr != NULL)
  {
    ptr = strtok(NULL, " ");
    cout << ptr << endl;
  }

  return 0;
}