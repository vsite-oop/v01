#include "app.h"

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)



    int main()
    {
        int number;
        std::cout << "Unesite cijeli broj: ";
        std::cin >> number;

        std::cout << "Heksadecimalni zapis broja " << number << ": " << vsite::oop::v1::to_hex(number) << std::endl;

        std::cout << "Tablica množenja do broja " << number << ":\n";
        vsite::oop::v1::mult_table(number, std::cout);

        return 0;
    }


