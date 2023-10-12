#include "app.h"
#include <format>
#include <iostream>
#include <iomanip>
using std::cout;
using std::string;
namespace vsite::oop::v1
{
/*
* function implementations
*/
/**********************************************************************************************
*                                pretvara broj u heksadecimalni zapis                         *
***********************************************************************************************/
	string to_hex(int number) {
		string hex_number = std::format("{:X}", number);
		return hex_number;
	}

/**********************************************************************************************
*                                pretvara broj u znanstveni zapis                             *
***********************************************************************************************/

	string to_exp(double number) {
		string scientific_number = std::format("{:.2e}", number);
		return scientific_number;
	}

/**********************************************************************************************
*                                radi tablicu mnozenja                                        *
***********************************************************************************************/

	void mult_table(int number, std::ostream& ss) {
		if (number <= 0 || number > 20) {
			ss << "";
		}
		else {
			for (int i = 0; i <= number; i++) {
				ss << i << std::setw(4);
			}
			ss << std::setw(0) << "\n";
			for (int i = 1; i <= number; i++) {
				ss << i << std::setw(4);
				for (int j = 1; j <= number; j++) {
					ss << j * i << std::setw(4);
				}
				ss << std::setw(0) << "\n";
			}
		}
	}

} // namespace

