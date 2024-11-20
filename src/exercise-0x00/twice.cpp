#include <iostream>
#include "twice.h"
#include <string>
using namespace std;

int main() {
  // letter_seen_twice("test");
  letter_seen_twice("Welcome to the wonderful world of software engineering");
  letter_seen_twice("Uncopyrightable");

  return 0;
}

// Exercise 0x00 && Exercise 0x01
string letter_seen_twice(string text) {
  for (int i = 0; i < text.size(); i ++) {
    char current = text.at(i);
    for (int j = i + 1; j < text.size(); j ++) {
      if (current == text.at(j)) {
        cout << "'" << current << "', found at indices [" << i << ", " << j << "]" << endl;
        return "";
      }
    }
  }
  cout << "'" << text << "' contains no duplicate characters" << endl;
  return "";
}