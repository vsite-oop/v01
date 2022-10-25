#include "app.h"
#include <format>
#include <sstream>


// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)


void my_function_v01(double n) {
	std::cout << "Hexadecimalna vrijednost:\n";
	std::cout << std::format ("{}{}",vsite::oop::v1::to_hex(n), "\n");

	std::cout << "Tablica mnozenja do zadanog broja:\n";
	std::stringstream moj_stream;
	vsite::oop::v1::mult_table(n, moj_stream);
	std::cout << moj_stream.str();
}


int main(){
	double n;
	std::cout << "Unesite cijeli broj:\n";
	std::cin >> n;

	my_function_v01(n);
}
