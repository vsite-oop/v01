#include "app.h"
#include <format>

using namespace vsite::oop::v1;

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
	int a;
	std::cout<< "Upisi br:";
	std::cin >> a;
	std::cout << std::format("Broj {} u hexu je{}", a, to_hex(a));
	std::cout<<std::format("Broj {} u znanstvenom zapisu je{}", a, to_exp(a));
	mult_table(a, std::cout);

}
