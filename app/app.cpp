#include "app.h"
#include <format>
#include <sstream>
#include <iomanip>

namespace vsite::oop::v1
{
    std::string to_hex(int broj) {
        return std::format("{:X}", broj);
    }

    
    std::string to_exp(double broj) {
        return std::format("{:.2e}", broj);
    }

    void mult_table(int broj, std::ostream& ss) {
        if (broj == 0 || broj > 20) {
            return;
        }

        for (int i = 0; i < broj + 1; i++) {
            for (int j = 0; j < broj + 1; j++) {
                if (i == 0 && j == 0) {
                    ss << j;
                }
                else 
                    if (j == 0) {
                    ss << i;
                    }
                     else {
                        if (i > 0) {
                            std::string znamenka = std::to_string(j * i);
                            ss << std::setw(4) << znamenka;

                        }
                        else {
                            std::string znamenka = std::to_string(j * 1);
                            ss << std::setw(4) << znamenka;

                        }
                    
                     }
            }
            ss << "\n";
        }
    }

} // namespace