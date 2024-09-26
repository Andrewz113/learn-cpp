#include <iostream>

int main() {
  
  int year;

  std::cout << "Please enter the year of birth as 'xxxx': \n";
  std::cin >> year;

  if (year >= 1000 && year <= 9999) {
    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {
      std::cout << "Year falls on a leap year\n";
    } else {
      std::cout << "Year does not fall on a leap year\n";
    }
  } else {
    std::cout << "Invalid entry.\nPlease enter a year in the format of 'xxxx'. \n";
  }
  
return 0;

}
