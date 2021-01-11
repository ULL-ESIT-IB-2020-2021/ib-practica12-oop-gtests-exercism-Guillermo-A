#include <iostream>
#include <cstdlib>
#include "complex.h"
#include <cmath>
#include <string>

int main(int argc, char*argv[]){
    Usage(argc, argv);
    double real1, real2, imag1, imag2;
    real1 = atof(argv[1]);
    imag1 = atof(argv[2]);
    real2 = atof(argv[3]);
    imag2 = atof(argv[4]);
    Complex z1(real1, imag1);
    std::cout << "Primer Complejo(z1): " << std::endl;
    z1.print_complex();
    Complex z2(real2, imag2);
    std::cout << "Segundo Complejo(z2): " << std::endl;
    z2.print_complex();
    Complex result;
    result = z1.add(z2);
    std::cout << "Suma entre z1 y z2" << std::endl;
    result.print_complex();
    result = z1.sub(z2);
    std::cout << "Resta entre z1 y z2" << std::endl;
    result.print_complex();
    result = z1.mult(z2);
    std::cout << "Multiplicacion entre z1 y z2" << std::endl;
    result.print_complex();
    result = z1.div(z2);
    std::cout << "Division entre z1 y z2" << std::endl;
    result.print_complex();
    return 0;
}