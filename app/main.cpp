#include "app.h" 

int main()
{
    int num;

    
    std::cout << "Unesite broj: ";
    std::cin >> num;

    std::string hexRepresentation = vsite::oop::v1::to_hex(num);
    std::cout << "Hexadecimalna reprezentacija: " << hexRepresentation << std::endl;

    std::cout << "Multiplication Table do broja: " << num << ":\n";
    vsite::oop::v1::mult_table(num);

    return 0;
}