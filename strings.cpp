#include <iostream>
#include <vector>
#include "f_to_celsius.hpp"
#include <Eigen/Dense>

int main(void)
{
    const std::vector<double> my_vector;
    double a = 2.5;

    for(int i = 0; i < 5; i++)
{    my_vector.push_back(a*i);


    std::cout << i << "th element is " << my_vector.at(i) << std::endl;
    }
    print_vector(my_vector);

    std::cout << "My vector has " << my_vector.size() << " elements.\n" << std::endl;
       return 0;
}

