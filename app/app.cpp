#include "app.h"
#include <format>
#include <sstream>

namespace vsite::oop::v1
{
/*
* function implementations
*/
    std::string to_hex(int num) {
        return std::format("{:X}", num);
    }

    std::string to_exp(double num) {
        return std::format("{:.2e}", num);
    }

    void mult_table(int n, std::stringstream& ss) {
        if (n == 0 || n > 20) {
            return;
        }

        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < n + 1; j++) {                
                if (i == 0 && j == 0) {
                    ss << j;
                }
                else if (j == 0) {
                    ss << i;
                } 
                else {
                    int m = i > 0 ? i : 1;
                    std::string digit = std::to_string(j*m);
                    int digitCount = 4 - digit.length();
                    for (int i = 0; i < digitCount; i++) {
                        ss << " ";
                    }
                    ss << digit;
                }                
            }
            ss << "\n";
        }
    }

} // namespace