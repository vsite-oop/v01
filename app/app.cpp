#include "app.h"
#include <iostream>
#include <iomanip>
#include <sstream>

namespace vsite::oop::v1 {

    std::string to_hex(int num) {
        std::stringstream ss;
        ss << std::hex << std::uppercase << num;
        return ss.str();
    }

    std::string to_exp(double num) {
        std::stringstream ss;
        ss << std::scientific << std::setprecision(2) << num;
        return ss.str();
    }
    void mult_table(int num, std::ostream& output) {
        if (num <= 0 || num > 20) {
            return;
        }
        else {
            for (int i = 0; i <= num; i++) {
                for (int j = 0; j <= num; j++) {
                    if (i == 0 || j == 0) {
                        output<< (i + j);
                        if (j != num) output << std::setw(4);
                    }
                    else {
                        output<< (i * j);
                        if (j != num) output << std::setw(4);
                    }
                }output << "\n";
                
            }
        }
    }
}
