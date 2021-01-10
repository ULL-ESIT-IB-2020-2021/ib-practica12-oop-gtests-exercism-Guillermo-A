
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

void Usage(int argc, char*argv[]);
double sum(double real1, double imag1, double real2, double imag2);
double rest(double real1, double imag1, double real2, double imag2);
double mult(double real1, double imag1, double real2, double imag2);
double div(double real1, double imag1, double real2, double imag2);