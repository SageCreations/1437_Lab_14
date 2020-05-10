//******************************************************
// Author:  
//
// Program: Decimal to binary
// This program uses recursion to find the binary
// representation of a nonnegative integer.
//******************************************************

// Edited by Edward Cruz on 05/09/2020

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
    cout << "\n0.) Quit program.";
    cout << "\n1.) Decimal -> Binary";
    cout << "\n2.) Decimal -> Octal";
    cout << "\n3.) Decimal -> Hexidecimal" << endl;
    cout << "-->> ";
    cin  >> option;

    switch(option) {
      case 0: more = false; break;
      case 1: 
        cout << "\n\nPlease enter a decimal number: ";
        cin  >> num;
        cout << "\nDecimal " << num << " = ";
        decToBin(num, 2);
        cout << " binary" << endl;
        more = true;
        break;
      case 2:
        cout << "\n\nPlease enter a decimal number: ";
        cin  >> num;
        cout << "\nDecimal " << num << " = ";
        decToOctal(num, 8);
        cout << " Octal" << endl;
        more = true;
        cout << endl;
        system("pause");
        break;
      case 3:
        cout << "\n\nPlease enter a decimal number: ";
        cin  >> num;
        cout << "\nDecimal " << num << " = ";
        decToHex(num, 16);
        cout << " Hexidecimal" << endl;
        more = true;
        cout << endl;
        system("pause");
        break;
      default:
        cout << "\n\nPlease enter one of the options above!";
        more = true;
        cout << endl;
        system("pause");
        break;
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
    int remainder = num % base;
    cout << remainder;
  }
}

void decToHex(int num, int base) {
  if (num > 0) {
    decToHex(num / base, base);
    int remainder = num % base;
    switch(remainder) {
      case 10: cout << "A"; break;
      case 11: cout << "B"; break;
      case 12: cout << "C"; break;
      case 13: cout << "D"; break;
      case 14: cout << "E"; break;
      case 15: cout << "F"; break;
      default: cout << remainder; break;
    }
  }
} 