//******************************************************
// Author:  
//
// Program: Decimal to binary
// This program uses recursion to find the binary
// representation of a nonnegative integer.
//******************************************************

#include <iostream>

using namespace std;

void menu();
void decToBin(int num, int base);
void decToOctal(int num, int base);
void decToHex(int num, int base);


int main() {
  
  menu();

  return 0;
}

void menu() {
  int option, num;
  bool more = false;
  do {
    cout << "\n\nPlease Enter a number for menu option...";
    cout << "\n1.) Decimal -> Binary";
    cout << "\n2.) Decimal -> Octal";
    cout << "\n3.) Decimal -> Hexidecimal" << endl;
    cout << "-->> ";
    cin  >> option;

    cout << "\n\nPlease enter a decimal number: ";
    cin  >> num;

    switch(option) {
      case 1: 
        cout << "\nDecimal " << num << " = ";
        decToBin(num, 2);
        cout << " binary" << endl;
        more = false;
        break;
      case 2:
        cout << "\nDecimal " << num << " = ";
        decToOctal(num, 8);
        cout << " Octal" << endl;
        more = false;
        break;
      case 3:
        cout << "\nDecimal " << num << " = ";
        decToHex(num, 16);
        cout << " Hexidecimal" << endl;
        more = false;
        break;
      default:
        cout << "\n\nPlease enter one of the options above!";
        more = true;
        
    }
  } while (more);
  

}

void decToBin(int num, int base) {
  if (num > 0) {
    decToBin(num / base, base);
    cout << num % base;
  }
}

void decToOctal(int num, int base) {
  if (num > 0) {
    decToOctal(num / base, base);
    cout << num % base;
  }
}

void decToHex(int num, int base) {
  if (num > 0) {
    decToHex(num / base, base);
    cout << num % base;
  }
}
