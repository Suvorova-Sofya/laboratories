#ifndef COMPLEX_NEW
#define COMPLEX_NEW

struct complex{

    complex();
    complex(double r1,double q1);
    complex print_complex();
    complex sum_complex(complex a);
    complex diff_complex(complex a);
    complex mult_complex(complex a);
    complex divis_complex(complex a);
    bool compar_complex(complex a);
    complex conj_complex();
private:
    double r;
    double q;
};
#endif