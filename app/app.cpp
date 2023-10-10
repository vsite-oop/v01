#include "app.h"
#include <format>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

namespace vsite::oop::v1
{
/*
* function implementations
*/
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

    void mult_table(int n, std::ostream& os) {
        int field_width = 4;
            if(n == 0 || n > 20) {
                return;
            }

        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= n; ++j) {
                if (i == 0 && j == 0) {
                    os << "0";
                }
                else if (i == 0 || j == 0) {
                    if (j == 0) {
                        os << i + j;
                    }
                    else {
                        os << std::setw(field_width) << i + j;
                    }
                }
                else {
                    os << std::setw(field_width) << i * j ;
                }
            }
            os << "\n";
        }
    }




} // namespace

