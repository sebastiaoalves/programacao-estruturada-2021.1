#include "imc.h"
#include <cmath>

double calcula_imc (const Pessoa &a_pessoa){
    double imc;
    imc = a_pessoa.peso / pow(a_pessoa.altura, 2.0);
    return imc;
}

