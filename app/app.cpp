#include "app.h"
#include <format>
#include<iomanip>

namespace vsite::oop::v1
{
/*
* function implementations
*/

	std::string to_hex(int a) {

		
		return std::format("{:X}", a);

		
	}

	std::string to_exp(double a) {

		return std::format("{:.2e}", a);
	}

	void mult_table(int a, std::ostream& ss) {
		if (a <= 0 || a > 20) {
			return;
		}
		for (int i = 0; i <= a; ++i) {
			for (int j = 0; j <= a; ++j) {
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

