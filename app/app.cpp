#include "app.h"
#include <format>
#include <sstream>
#include <iomanip>
#include <string>

namespace vsite::oop::v1
{
	std::string to_hex(int broj) {
		std::stringstream stream;
		stream << std::hex << std::uppercase<< broj;
		return stream.str();
	}
	std::string to_exp(double broj) {
		std::stringstream stream;
		stream << std::scientific<< std::setprecision(2) << broj;
		return stream.str();
	}
	void mult_table(int n, std::ostream& output) {
		if (n == 0 || n>20) {
			return;
		}
		for (int i = 0; i <= n; i++){
			output << i;
			if (i + 1 <= n) {
				if (i+1 > 9) {
					output << "  ";
				}
				else {
					output << "   ";
				}
			}
		}
		output << '\n';

		for (int i = 1; i <= n; i++) {
			output << i;
			if (i > 9) {
				output << "  ";
			}
			else {
				output << "   ";
			}
			for (int j = 1; j <= n; j++) {
				output << i * j;
				if (j < n) {
					if (((i * (j + 1)) / 10) >0 && (((i * (j + 1)) / 10)<10)) {
						output << "  ";
					}
					else if (((i * (j + 1)) / 10) >9) {
						output << " ";
					}
					else{
						output << "   ";
					}
				}
			}
			output << '\n';
		}
	}

} // namespace

