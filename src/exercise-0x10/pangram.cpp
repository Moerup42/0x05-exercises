#include <iostream>
#include "pangram.h"
using namespace std;

int main(int argc, char** argv) {
  // Test strings
  string case_0 = "A quick brown fox jumps over the lazy dog.";
  string case_1 = "When zombies arrive quickly, fax judge Pat.";
  string case_2 = "The five boxing wizards jump quickly.";
  string case_3 = "Amazingly few discotheques provide jukeboxes.";

  // Exercise 0x00 - Setup a test for your implementation
  cout << "TEST - Exercise 0x00" << endl; 
  cout << "case_0: " << pangram(case_0) << endl;
  cout << "case_1: " << pangram(case_1) << endl;
  cout << "case_2: " << pangram(case_2) << endl;
  cout << "case_3: " << pangram(case_3) << endl;

  // Exercise 0x01 - Setup a test for your implementation
  cout << "TEST - Exercise 0x01" << endl;

  return 0;
}

bool pangram(string text) {
  int x;
  for (int i = 'A'; i <= 'Z'; i ++) {
    x = 1;
    for (int j = 0; j < text.size(); j ++) {
      if (text.at(j) == i || text.at(j) == i + 32) {
        x = 0;
        break;
      }
    }
    if (x) {
      return 0;
    }
  }
  return 1;
}

// Exercise 0x00 - Implement the function from "pangram.h"

// Exercise 0x01 - Implement the function from "program.h"