#include "ex7_21.h"

int main() {
    
    Sales_data total(std::cin);
    if (!total.isbn().empty()) {
        while (std::cin) {
            Sales_data trans(std::cin);
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }
        print(std::cout, total) << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}