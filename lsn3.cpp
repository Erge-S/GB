#include <iostream>
#include <iomanip>

extern const int a;
extern const int b;
extern const int c;
extern const int d;


int main() {
    int j;
    j = 15;
    double res = static_cast<double>(a) * (static_cast<double>(b) + (static_cast<double>(c) / static_cast<double>(d)));
    std::cout << res << std::endl;
    std::cout << ((j < 21) ? (j - 21) : ((j * 2) - 21)) << std::endl;



    return 0;
}