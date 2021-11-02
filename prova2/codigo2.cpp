#include <iostream>

using namespace std;

class Investimento{
    public:
        string nome_do_investimento;
        double taxa_de_retorno;
        Investimento( ) ;
        ~Investimento ( );
};


template <typename T>
bool compara (T primeiro, T segundo);


double calcula_media (int n, double *valores, double *pesos=nullptr);

int (*ptr_func) (const string &string1, const string &string2);

int func (const string &str1, const string &str2){
    return 0;
}

int main(){
    ptr_func=func;
    ptr_func("olá", "mundo");
    return 0;
}