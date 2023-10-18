#include "app.h"

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
	int decimalniBroj= 42;
	std::string hexString = vsite::oop::v1::to_hex(decimalniBroj);
	std::cout << "Decimal: " << decimalniBroj << " => Hexadecimal: " << hexString << std::endl;
	double broj = 41146;
	std::string scientificBroj = vsite::oop::v1::to_exp(broj);
	std::cout << "Decimal: " << broj << "=> Scientific: " << scientificBroj<< std::endl;
	int tablica = 7;
	vsite::oop::v1::mult_table(tablica,std::cout);


}
