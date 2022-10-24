#include "app.h"
#include <format>
#include <sstream>


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
		Ovo je moj neki tezi nacin bez formata...
		
		std::string to_hex(int n) {
		char hex_string[20];
		sprintf_s(hex_string, "%X", n);
		return hex_string;
	}
	*/


	void mult_table(int n, std::stringstream& ss) {
		if (n <= 0 || n > 20) {  // tablica radi samo za brojeve od 0 do 20
			ss << "";
		}
		else {
			ss << 0;  // ispis prvog reda u tablici
			for (int i = 1; i < n; i++)
				ss << std::format("{:4}", i);
			ss << std::format("{:4}", n) << "\n";

			for (int i = 1; i <= n; i++) {
				ss << i; // u svakom redu prvo ispisi i,...
				for (int j = 1; j < n; j++)  // ...a dalje je mnozenje i * j...
					ss << std::format("{:4}", i * j);
				ss << std::format("{:4}", i * n) << "\n";  // ...s tim da na zadnjem (j==n) još i predjem u novi red
			}
		}
	}

} // namespace
