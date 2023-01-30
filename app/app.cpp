#include "app.h"
#include <format>


namespace vsite::oop::v1
{
	std::string to_hex(int number) {
		return std::format("{:X}", number);
	}

	std::string to_exp(double number) {
		return std::format("{:.2e}", number);
	}


	void mult_table(int number, std::ostream& os) {
		if (number <= 0 || number > 20) {
			return;
		}
		else {
			os << 0;
			for (int i = 1; i < number; i++)
				os << std::format("{:4}", i);
			os << std::format("{:4}", number) << "\n";

			for (int i = 1; i <= number; i++) {
				os << i;
				for (int j = 1; j < number; j++)
					os << std::format("{:4}", i * j);
				os << std::format("{:4}", i * number) << "\n";
			}
		}
	}





}

