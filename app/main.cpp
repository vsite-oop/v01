#include "app.h"
#include <sstream>
// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

#include <iostream>
#include <string>

using namespace std;



int main() {

	int n;
	cin >> n;
	cout << vsite::oop::v1::to_hex(n);
	cout << vsite::oop::v1::to_exp(n);
	std::stringstream os;
	vsite::oop::v1::mult_table(n,os);


	return 0;
}
