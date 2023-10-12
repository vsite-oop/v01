#pragma once
#include<string>
#include<iostream>
#include<format>
#include <iomanip>
//#include<sstream>

namespace vsite::oop::v1
{
	std::string to_hex(int n);
	std::string to_exp(double n);
	void mult_table(int a, std::ostream& ss);
	/*std::string to_hex(int n) {
		std::string z = std::format("{:0X}", n);
		return z;
	}
	std::string to_exp(double n) {
		std::string x = std::format("{:1.2e}", n);
		return x;
	}
	void mult_table(int a, std::ostream& ss) {
		/*if (a > 0 && a < 21) {
			for (int i = 0; i <= a; i++) {
				for (int j = 1; j <= a; j++) {
					ss << std::setw(4) << i * j;
					if (j != a)
					{
						ss << std::setw(4) << " ";
					}
					else
					{
						ss << std::setw(4) << "\n";
					}
				}
			}
		}
	}*/
}
