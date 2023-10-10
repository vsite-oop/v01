#include "app.h"
#include <format>
#include <iomanip>
#include <iostream>


namespace vsite::oop::v1
{
	std::string to_hex(int broj) {
		std::string x = std::format("{:0X}", broj);
		return x;
	}
	std::string to_exp(double broj) {
		std::string y = std::format("{:1.2e}", broj);
		return y;
	}
	void mult_table(int broj, std::ostream& out)
	{
		if (broj > 0 and broj <= 20)
		{
			for (int x = 0; x <= broj; ++x)
			{
				out <<  x;
				for (int y = 1; y <= broj; ++y)
				{
					if (x == 0)
					{
						int broj1 = x + y;
						out << std::setw(4) << x + y;
					}
					else
					{
						int broj2 = x * y;
						out << std::setw(4) << x*y;
					}
				}
				out << "\n";
			}
		}
	}
/* function implementations
*/

} // namespace

