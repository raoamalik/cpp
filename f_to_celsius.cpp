#include <iostream>

#include "f_to_celsius.hpp"
//double f_to_celsius(double f_temp);


int main(void)
{
    double f = 110;
    double c = f_to_celsius(f);
    double k = f_to_kelvin(f);
    std::cout << "F = " << f << " C = " << c << std::endl;
    std::cout << "K = " << k << std::endl;
    return 0;
}




// int main(void)
// {
//     double f = 110;
//     double c = f_to_celsius(f);
//     std::cout << "F = " << f << " C = " << c << std::endl;

//     return 0;
// }