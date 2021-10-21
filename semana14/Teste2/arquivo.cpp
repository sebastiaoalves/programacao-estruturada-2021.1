#include "imc.h"

#include <fstream>
#include <iostream>

Pessoa le_arquivo(string nome_do_arquivo){

    ifstream fin (nome_do_arquivo);
    Pessoa a_pessoa;
    fin >> a_pessoa.nome >> a_pessoa.altura >> a_pessoa.peso;

    return a_pessoa;
}
