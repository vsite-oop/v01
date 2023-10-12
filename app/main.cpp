#include "app.h"
#include <iostream>
#include <format>
#include <iomanip>
#include <string>
using std::cout;
using std::cin;
using std::string;
using vsite::oop::v1::to_hex;
using vsite::oop::v1::mult_table;

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)




int main()
{
	int number;
	cout << "unesite broj: ";
	cin >> number;
	cout << to_hex(number) << "\n";
	mult_table(number, cout);



}
