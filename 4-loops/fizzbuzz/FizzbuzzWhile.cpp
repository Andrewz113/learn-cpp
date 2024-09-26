#include <iostream>

using namespace std;

int main() {

int i = 0;

  while(i <= 99) {
    i++;
    if (i % 3 == 0 && i % 5 == 0) {
      cout << "FizzBuzz\n";
    }
    else if (i % 5 == 0) {
      cout << "Buzz\n";
    }
    else if (i % 3 == 0) {
      cout << "Fizz\n";
    }
    else {
      cout << i << "\n";
    }
  }
  return 0;
}
