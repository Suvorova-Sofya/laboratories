#include <iostream>
#include "complex.h"
#include <math.h>

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