#include "app.h"
#include <format>
#include <ostream>


namespace vsite::oop::v1
{
/*
* function implementations
*/

	std::string to_hex(int n) {
		return std::format("{:X}", n);
	}

	std::string to_exp(double n) {
		return std::format("{:.2e}", n);
	}

	/*
		Another way I came up with without format()...
		
		std::string to_hex(int n) {
			char hex_string[20];
			sprintf_s(hex_string, "%X", n);
			return hex_string;
	}
	*/


	void mult_table(int n, std::ostream& ss) {
		if (n <= 0 || n > 20) {  // Table works only for numbers from 0 to 20
			ss << "";
		}
		else {
			ss << 0;  // Writing first table row
			for (int i = 1; i < n; i++)
				ss << std::format("{:4}", i);
			ss << std::format("{:4}", n) << "\n";

			for (int i = 1; i <= n; i++) {
				ss << i;  // In each row first write "i",...
				for (int j = 1; j < n; j++)  // ...else is multiplication i * j...
					ss << std::format("{:4}", i * j);
				ss << std::format("{:4}", i * n) << "\n";  // ...additionally, in the last one (j==n) move to the next row.
			}
		}
	}

} // namespace
