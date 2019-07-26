#include <iostream>
#include <vector>
#include "f_to_celsius.hpp"


// how to print the whole vector 
void print_vector(std::vector<double> my_vector)
{
    for(int i = 0; i < my_vector.size(); i++)
        std::cout << "Element " << i << " is " << my_vector[i] << std::endl;

    // range-based for loop
    for(auto it : my_vector)
        std::cout << "Elements are " << it << std::endl;
}


int main(void)
{
    std::vector<double> my_vector;
    double a = 2.5;

    for(int i = 0; i < 5; i++)
{    my_vector.push_back(a*i);


    std::cout << i << "th element is " << my_vector.at(i) << std::endl;
    }
    print_vector(my_vector);

    std::cout << "My vector has " << my_vector.size() << " elements.\n" << std::endl;
       return 0;
}

