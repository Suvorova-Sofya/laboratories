#include <iostream>
#include "complex.h"
#include <math.h>

complex::complex() {r=0;q=0;}

complex::complex(double r1, double q1){
    r=r1;
    q=q1;
}

complex complex::print_complex() {
    std::cout << r << " " << q << std::endl;
}

complex complex::sum_complex(complex a) {
    complex res;
    double a1,b1,a2,b2,a3,b3;
    a1=r*cos(q*M_PI);
    b1=r*sin(q*M_PI);
    a2=a.r*cos(a.q*M_PI);
    b2=a.r*sin(a.q*M_PI);
    a3=a1+a2;
    b3=b1+b2;
    res.r=sqrt(pow(a3,2)+pow(b3,2));
    res.q=(atan2(b3,a3))/M_PI;
    return res;
}

complex complex::diff_complex(complex a) {
    complex res;
    double a1,b1,a2,b2,a3,b3;
    a1=r*cos(q*M_PI);
    b1=r*sin(q*M_PI);
    a2=a.r*cos(a.q*M_PI);
    b2=a.r*sin(a.q*M_PI);
    a3=a1-a2;
    b3=b1-b2;
    res.r=sqrt(pow(a3,2)+pow(b3,2));
    res.q=(atan2(b3,a3))/M_PI;
    return res;
}

complex complex::mult_complex(complex a) {
    complex res;
    res.r=a.r*r;
    res.q=a.q+q;
    return res;
}

complex complex::divis_complex(complex a) {
    complex res;
    res.r=r/a.r;
    res.q=q-a.q;
    return res;
}

bool complex::compar_complex(complex a) {
    if((r==a.r)&&(q==a.q)){
        return true;
    } else{
        return false;
    }
}

complex complex::conj_complex() {
    complex res;
    res.r=r;
    res.q=(-1)*q;
    return res;
}
