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
    res.q=atan(b3/a3);
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
    res.q=atan(b3/a3);
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

int main() {
    double a, b,c,d;
    std::cout << "Введите 2 комплексных числа" << std::endl;
    std::cin >> a >> b >> c >> d;
    if((a<0) || (c<0)){
        std::cout << "Модуль не может быть отрицательным " << std::endl;
    }else {
        complex w1 = complex(a, b);
        complex w2 = complex(c, d);
        complex res;
        std::cout << "+ :";
        res=w1.sum_complex(w2);
        res.print_complex();
        std::cout << "- :";
        res=w1.diff_complex(w2);
        res.print_complex();
        std::cout << "* :";
        res=w1.mult_complex(w2);
        res.print_complex();
        std::cout << "/ :";
        res=w1.divis_complex(w2);
        res.print_complex();
        std::cout << "Сравнение :";
        if(w1.compar_complex(w2)){
            std::cout << "Равны" <<"\n";
        }else{
            std::cout <<"Не равны" << "\n";
        }
        std::cout << "Сопряженое первого комплексного числа :";
        res=w1.conj_complex();
        res.print_complex();
    }
    return 0;
}