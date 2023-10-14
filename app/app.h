#pragma once
#include <string>
#include <iostream>

namespace vsite::oop::v1
{
	std::string to_hex(int input);

	std::string to_exp(double input);

	void mult_table(int n, std::ostream& ss);

}
