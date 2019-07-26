#include <iostream>
#include <Eigen/Dense>
#include <string>
#include <vector>
//#include <f_to_celsius.hpp>

int main(void)
{
    Eigen::MatrixXd mat(2,3);
    Eigen::VectorXd vec(3);

    mat(0,0) = 1.0;
    mat(0,1) = 2.0;
    mat(0,2) = 3.0;
    mat(1,0) = 4.0;
    mat(1,1) = 5.0;
    mat(1,2) = 6.0;

    vec(0) = vec(1) = vec(2) = 1.0;


    std::cout << mat << std::endl;
     std::cout << vec.dot(vec) << std::endl;

     Eigen::MatrixXd mat2 = mat * mat.transpose();

      std::cout << mat2 << std::endl;

      Eigen::MatrixXd vmult = mat * vec;
      std::cout << "vmult \n" << vmult << std::endl;

      std::cout << "Rows: " << mat.rows() << std::endl;
      std::cout << "Columns: " << mat.cols() << std::endl;
    return 0;
}