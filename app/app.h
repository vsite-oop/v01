#pragma once
#include <string>
#include <iostream>
#include <ostream>
using std::string;

namespace vsite::oop::v1
{
/*
* function declarations
*/
	string to_hex(int number);
	string to_exp(double number);
	void mult_table(int number, std::ostream& ss);

}
