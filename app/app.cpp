#include "app.h"
#include <format>
#include <ostream>
#include <iomanip>

namespace vsite::oop::v1
{
	std::string to_hex(int x) {
		std::string out = std::format("{:0X}", x);
		return out;
	}

	std::string to_exp(double x) {
		std::string out = std::format("{:1.2e}", x);
		return out;
	}

	void mult_table(int x, std::ostream& ss) {
		if (!x || x > 20) {
			return;
		}
		for (int i = 0; i < x + 1; i++) {
			for (int j = 0; j < x + 1; j++) {
				if (!i && !j) ss << 0;
				else if (!i) ss << std::setw(4) << j;
				else if (!j) ss << i;
				else {
					ss << std::setw(4) << (i * j);
				}
			}
			ss << "\n";
		}
	}

} // namespace

