#include "app.h"
#include <format>


namespace vsite::oop::v1
{
/*
* function implementations
*/
	std::string to_hex(int n) {
		char hex_string[20];
		sprintf_s(hex_string, "%X", n);
		return hex_string;
	}

} // namespace

