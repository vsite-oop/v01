#include "app.h"
// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
	int x;
	std::cin >> x;
	double y;
	std::cin >> y;
	std::cout<<vsite::oop::v1::to_hex(x)<<"\n";
	std::cout << vsite::oop::v1::to_exp(y) <<std::endl;
	vsite::oop::v1::mult_table(x,std::cout);
}
