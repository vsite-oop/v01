#include "app.h"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>


// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)



int main() {

    int num;
    std::cout << "Unesite cijeli broj: ";
    std::cin >> num;

    std::string hex_str = vsite::oop::v1::to_hex(num);
    std::cout << "Heksadecimalni zapis: " << hex_str << std::endl;

    std::cout << "Tablica množenja do " << num << ":\n";
    vsite::oop::v1::mult_table(num, std::cout);

    return 0;
}
