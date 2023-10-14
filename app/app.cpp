#include "app.h"
#include <ostream>
#include <iomanip>
#include <format>

namespace vsite::oop::v1
{
	std::string to_hex(int input) {
		std::string out = std::format("{:0X}", input);
		return out;
	}

	std::string to_exp(double input) {
		std::string out = std::format("{:1.2e}", input);
		return out;
	}

	void mult_table(int n, std::ostream& ss) {
		if (n == 0 || n > 20) {
			ss << "";
			return;
		}
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) {
				if (!i && !j)
					ss << 0;
				else if (!i)
					ss << std::setw(4) << j;
				else if (!j && i != 0)
					ss << i;
				else {
					ss << std::setw(4) << i * j;
				}
			}
			ss << "\n";
		}
		
	}

} // namespace

