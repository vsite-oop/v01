#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>



    /*
    * function declarations
    */



namespace vsite::oop::v1 {

    
        std::string to_hex(int num);
        std::string to_exp(double num);
        void mult_table(int num, std::ostream & output = std::cout);
    }
