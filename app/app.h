#pragma once
#include<string>
#include<iostream>
#include<format>
#include <iomanip>
#include<sstream>

namespace vsite::oop::v1
{
	std::string to_hex(int n);
	std::string to_exp(double n);
	void mult_table(int a, std::ostream& ss);
}
