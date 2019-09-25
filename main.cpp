#include <iostream>
#include "complex.h"
#include <math.h>

complex::complex() {r=0;q=0;}

complex::complex(double r1, double q1){
    r=r1;
    q=q1;
}

void complex::print_complex() {
    std::cout << r << " " << q << std::endl;
}

void complex::sum_complex(complex a) {
    complex res;
    double a1,b1,a2,b2,a3,b3;
    a1=r*cos(q*M_PI);
    b1=r*sin(q*M_PI);
    a2=a.r*cos(a.q*M_PI);
    b2=a.r*sin(a.q*M_PI);
    a3=a1+a2;
    b3=b1+b2;
    res.r=sqrt(pow(a3,2)+pow(b3,2));
    res.q=atan(b3/a3);
    std::cout << res.r << " " << res.q << std::endl;
}

void complex::diff_complex(complex a) {
    complex res;
    double a1,b1,a2,b2,a3,b3;
    a1=r*cos(q*M_PI);
    b1=r*sin(q*M_PI);
    a2=a.r*cos(a.q*M_PI);
    b2=a.r*sin(a.q*M_PI);
    a3=a1-a2;
    b3=b1-b2;
    res.r=sqrt(pow(a3,2)+pow(b3,2));
    res.q=atan(b3/a3);
    std::cout << res.r << " " << res.q << std::endl;
}

void complex::mult_complex(complex a) {
    complex res;
    res.r=a.r*r;
    res.q=a.q+q;
    std::cout << res.r << " " << res.q << std::endl;
}

void complex::divis_complex(complex a) {
    complex res;
    res.r=r/a.r;
    res.q=q-a.q;
    std::cout << res.r << " " << res.q << std::endl;
}

void complex::compar_complex(complex a) {
    if((r==a.r)&&(q==a.q)){
        std::cout << "Равны" << std::endl;
    } else{
        std::cout << "Не равны" << std::endl;
    }
}

void complex::conj_complex() {
    q=(-1)*q;
}

int main() {
    double a, b,c,d;
    std::cout << "Введите 2 комплексных числа"<< std::endl;
    std::cin >> a >> b >> c >> d;
    if((a<0) || (c<0)){
        std::cout << "Модуль не может быть отрицательным" << std::endl;
    }else {
        complex w1 = complex(a, b);
        complex w2 = complex(c, d);
        std::cout << "+ :";
        w1.sum_complex(w2);
        std::cout << "- :";
        w1.diff_complex(w2);
        std::cout << "* :";
        w1.mult_complex(w2);
        std::cout << "/ :";
        w1.divis_complex(w2);
        std::cout << "Сравнение :";
        w1.compar_complex(w2);
        std::cout << "Сопряженое первого комплексного числа :";
        w1.conj_complex();
        w1.print_complex();
    }
    return 0;
}