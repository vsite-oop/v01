#pragma once
#include <string>
#include <ostream>  // ostream

namespace vsite::oop::v1
{
/*
* function declarations
*/

	std::string to_hex(int n);

	std::string to_exp(double n);

	void mult_table(int n, std::ostream& ss);
}
