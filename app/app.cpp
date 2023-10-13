#include "app.h"
#include <format>
#include <iomanip>
#include <sstream>

namespace vsite::oop::v1
{
	//funkcije
/*
* function implementations
*/
// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
	std::string to_hex(int number) {
		//https://stackoverflow.com/questions/5100718/integer-to-hex-string-in-c
		return std::format("{:X}", number);
	}

	std::string to_exp(double number) {
		//https://stackoverflow.com/questions/7132957/c-scientific-notation-format-number
		return std::format("{:.2e}", number);
	}

// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)
	void mult_table(int number, std::ostream& ss) {
		//https://en.cppreference.com/w/cpp/io/manip/setw
		if (number <= 0 || number > 20) {
			return;
		}
		for (int i = 0; i <= number; i++) {
			for (int j = 0; j <= number; j++) {
				if (!j) ss << i;
				else {
					if (i) ss << std::setw(4) << i * j;
					else ss << std::setw(4) << j;
				}
			}
			ss << "\n";
		}
		return;
	}
} // namespace

