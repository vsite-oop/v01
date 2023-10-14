#include "app.h"
#include <ostream>

using namespace vsite::oop::v1;
// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
	int x;
	while (1) {
		std::cout << "Unesite broj: ";
		std::cin >> x;
		if (x < 1) {
			std::cout << "Niste unijeli cijeli broj, probajte ponovo!\n";
		}
		else break;
	}
	std::cout << to_hex(x) << "\n";
	mult_table(x, std::cout);
}
