#include <iostream>
#include <stdlib>
#include "complex.h"
#include <cmath>


int main(int argc, char*argv[]){
    double real1, real2, imag1, imag2;
    real1 = atof(argv[1]);
    imag1 = atof(argv[2]);
    real2 = atof(argv[3]);
    imag2 = atof(argv[4]);
    Complex z1(real1, imag1);
    Complex z2(real2, imag2);
    Complex result;
    z1.print_complex();
    z2.print_complex();
    result = add(z1, z2);
    result.print_complex();
    result = sub(z1, z2);
    result.print_complex();
}