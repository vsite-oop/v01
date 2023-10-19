#include "app.h"

namespace vsite::oop::v1
{
	std::string to_hex(int n) {
		std::string x =std::format("{:0X}", n);
		return x;
	}

	std::string to_exp(double n) {
		std::string x = std::format("{:1.2e}", n);
		return x;
	}
	void mult_table(int a, std::ostream& ss) {
		if (a > 0 && a < 21) {
			for (int i = 0; i <= a; i++) {
				for (int j = 0; j <= a; j++) {
					if (i == 0 || j==0) {
						if (j != a) {
							ss << i + j << std::setw(4);
						}
						else
						{
							ss << i + j;
						}
					}
					else {
						if (j != a) {
							ss  << i * j << std::setw(4);
						}
						else
						{
							ss << i * j;
						}
					}
				}
				ss<< "\n";
			}
		}
	}

} // namespace

