#pragma once
#include <string>
#include <ostream>
#include <format>
#include<iostream>

namespace vsite::oop::v1
{
	std::string to_hex(int number);

	std::string to_exp(double number);

	void mult_table(int number, std::ostream& os);




}
