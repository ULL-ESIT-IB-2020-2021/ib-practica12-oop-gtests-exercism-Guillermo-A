#include <iostream>
#include <cstdlib>
#include "complex.h"
#include <cmath>
#include <string>



class Complex{
    public:
        Complex();
        Complex(double);
        Complex(double , double);
        Complex(Complex &obj);
        Complex add(Complex z2);
        Complex sub(Complex z2);
        Complex mult(Complex z2);
        Complex div(Complex z2);
        void setReal(double _real);
        void setImag(double _imag);
        double getReal();
        double getImag();
        void print_complex();
    private:
        double real, imag;
};

#include <iostream>
#include <cstdlib>
#include "complex.h"
#include <cmath>
#include <string>

Complex::Complex(){
    real = 0.0;
    imag = 0.0;
}

Complex::Complex(double _real){
    real = _real;
    imag = 0.0;
}

Complex::Complex(double _real, double _imag){
    real = _real;
    imag = _imag;
}

Complex::Complex(Complex &obj){
  real=obj.real;
  imag=obj.imag;
}

Complex Complex::add(Complex z2){
    Complex Add;
    Add.real = real + z2.real;
    Add.imag = imag + z2.imag;
    return Add;
}

Complex Complex::sub(Complex z2){
    Complex Sub;
    Sub.real = real - z2.real;
    Sub.imag = imag - z2.imag;
    return Sub;
}

Complex Complex::mult(Complex z2){
    Complex Mult;
    Mult.real = real * z2.real;
    Mult.imag = imag * z2.imag;
    return Mult;
}

Complex Complex::div(Complex z2){
    Complex Div;
    Div.real = (real * z2.real) / (z2.real * z2.real);
    Div.imag = (imag * (- z2.imag)) / (z2.imag * (- z2.imag));
    return Div;
}

void Complex::setReal(double _real){
    real = _real;
}

void Complex::setImag(double _imag){
    imag = _imag;
}

double Complex::getReal(){
    return real;
}

double Complex:: getImag(){
    return imag;
}

void Complex::print_complex(){
    if(imag == 0){
        std::cout << real << std::endl;
    }else{
        std::cout << real << " + (" << imag << ")i" << std::endl;
    }
}


void Usage(int argc, char*argv[]){
    if(argc == 2){
        const std::string kHelpText = "Este programa  realiza la suma resta division y multiplicacion de numeros complejos";
        std::string parameter{argv[1]};
        if(parameter == "--help"){
            std::cout << kHelpText << std::endl;
            std::cout << "Modo de uso: " << std::endl;
            std::cout << argv[0] << " n.real1 n.imaginario1 ";
            std::cout << "n.real2 n.imaginario2" << std::endl;
            exit(EXIT_SUCCESS);
        }
    }
    if(argc != 5){
        std::cout << argv[0] << ": Error, pruebe --help para mas informacion" << std::endl;
    }

}

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

