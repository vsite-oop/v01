#include "app.h"
#include <format>
#include <sstream>
using namespace vsite::oop::v1;

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main() {
	int number;
	std::cout << "Upisi jedan cijeli broj: ";
	std::cin >> number;
	std::cout << "\n" << std::format("Upisani broj {} u heksadecimalnom obliku : {}\n", number, to_hex(number));
	std::cout << std::format("Tablica mnozenja do broja {}:\n", number);
	mult_table(number, std::cout);
}
