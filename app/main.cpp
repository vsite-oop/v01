#include "app.h"

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
	int broj;
	std::cout << "Unesite broj: ";
	std::cin >> broj;
	std::cout << "Decimal: " << broj << " ->Hexadecimal: " << vsite::oop::v1::to_hex(broj) << "\n";
	vsite::oop::v1::mult_table(broj, std::cout);
	return 0;


}
