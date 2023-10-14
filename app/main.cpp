#include "app.h"
#include <iostream>


using namespace vsite::oop::v1;
// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main() {
	int x;
	while (true) {
		std::cout << "Unesite cijeli broj:";
		std::cin >> x;
		if (x > 0 && x != 0)
			break;
	}

	std::cout << to_hex(x);
	std::cout << "\n";
	mult_table(x, std::cout);
}
