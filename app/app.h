#pragma once
#include <string>
#include <iostream>

namespace vsite::oop::v1
{
/*
* function declarations
*/

    std::string to_hex(int num);

    std::string to_exp(double num);

    void mult_table(int num, std::ostream& ss);

}
