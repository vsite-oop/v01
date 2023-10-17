#include "app.h"
#include <format>
#include <sstream>
using namespace vsite::oop::v1;


int main()
{
    int broj;
    std::cout << "Upisi broj: ";
    std::cin >> broj;
    std::cout << "\n";
    std::cout << std::format("Broj {} u hexadecimalnom obliku: {}\n\n", broj, to_hex(broj));
    std::cout << std::format("Tablica mnozenja za broj {}:\n", broj);

    mult_table(broj, std::cout);

    return 0;
}