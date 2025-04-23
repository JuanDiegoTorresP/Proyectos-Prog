#include <iostream>
#include <cmath>
//declaracion de la funcion

bool isprime(long n);
void test(void;)

int main(void){
    std::cout << 2 << ": " << isprime(2) << "\n";
    std::cout << 6 << ": " <<  isprime(6) << "\n";
    std::cout << 10000000019 << ": " <<  isprime(10000000019) << "\n";
    return 0;
}

//implementacion

bool isprime(long n){

    if (n <= 1){
        std::cerr << "Número fuera de rango" << "\n";
        return false;
    }

    bool flag = true;

    if (n == 2){
        return true;
    }

    for (long ii = 2; ii <= std::sqrt(n) + 1; ii++){
        if (n%ii == 0){
            flag = false;
            break;
        }
    }

    return flag;

}