#pragma once
#include <string>
#include <iostream>

namespace vsite::oop::v1
{
	std::string to_hex(int x);
	std::string to_exp(double x);
	void mult_table(int x, std::ostream& ss);

}
