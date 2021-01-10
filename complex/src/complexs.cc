#include <iostream>
#include <stdlib>
#include "complex.h"
#include <cmath>

Complex::Complex(){
    real = 0.0
    imag = 0.0
}

Complex::Complex(double _real, double _imag){
    real = _real;
    imag = _imag;
}

void SetReal(double _real){
    real = _real;
}

void SetImag(double _imag){
    imag = _imag;
}

double GetReal(){
    return real;
}

double GetImag(){
    return imag;
}

void print_complex(){
    char moreless;
    if(imag >= 0){
        moreless = "+";
    }else{
        moreless = "-";
    }
    std::cout << real << moreless << abs(imag) << "i" << std::endl;
}

void add(Complex z1, Complex z2){
    double real3, imag3;
    real3 = z1.GetReal + z2.GetReal;
    imag3 = z1.GetImag + z2.GetImag;
}

void sub(Complex z1, Complex z2){
    double real3, imag3;
    real3 = z1.GetReal - z2.GetReal;
    imag3 = z1.GetImag - z2.GetImag;
}
