
class Complex{
    public:
        Complex();
        Complex(double _real, double _imag);
        void SetReal(double _real);
        void SetImag(double _imag);
        double GetReal();
        double GetImag();
        void print_complex();
        void add(Complex z1, Complex z2);
        void sub(Complex z1, Complex z2);
    private:
        double real, imag;
};