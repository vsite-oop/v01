#pragma once
#include <string>
#include <iostream>

namespace vsite::oop::v1
{
	//header definicija
/*
* function declarations
*/
	std::string to_hex(int number);

	std::string to_exp(double number);

	void mult_table(int number, std::ostream& ss);

}
