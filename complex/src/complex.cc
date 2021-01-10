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
    z1.print_complex();
    Complex z2(real2, imag2);
    z2.print_complex();
    Complex result;
    result = z1.add(z2);
    result.print_complex();
    result = z1.sub(z2);
    result.print_complex();
    result = z1.mult(z2);
    result.print_complex();
    result = z1.div(z2);
    result.print_complex();
    return 0;
}