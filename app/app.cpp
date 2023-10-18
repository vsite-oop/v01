#include "app.h"
#include <format>
#include <sstream>
#include <iomanip>
#include <string>

namespace vsite::oop::v1
{
	std::string to_hex(int broj) {
		return std::format("{:X}", broj);
	}
	std::string to_exp(double broj) {
		return std::format("{:.2e}", broj);
	}
	void mult_table(int n, std::ostream& output) {
		if (n == 0 || n>20) {
			return;
		}
		for (int i = 0; i <= n; i++){
			output << i;
			if (i == n) {
				break;
			}
			output << std::right << std::setw(4);
		}
		output << '\n';

		for (int i = 1; i <= n; i++) {
			output << i << std::right << std::setw(4);
			for (int j = 1; j <= n; j++) {
				output << i * j;
				if (j == n) {
					break;
				}
				output << std::right << std::setw(4);
			}
			output << '\n';
		}
	}

} // namespace

