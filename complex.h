#ifndef COMPLEX_NEW
#define COMPLEX_NEW

struct complex{

    complex();
    complex(double r1,double q1);
    void print_complex();
    void sum_complex(complex a);
    void diff_complex(complex a);
    void mult_complex(complex a);
    void divis_complex(complex a);
    void compar_complex(complex a);
    void conj_complex();
private:
    double r;
    double q;
};
#endif