#include <iostream>

using namespace std;

enum tipo_inscricao {PROF=1, ALUNO=2, FUNC=3, PROF_BASICA=4, OUTROS=5};
enum forma_pagamento {A_VISTA=1, DEBITO, CREDITO, PIX, BOLETO};
enum atalhos {ABRIR='a', SALVAR='s', FECHAR='f', NOVO='n'};

enum TipoSecao { MATINE, NOITE, MADRUGADA};

int main(){
    //const int PROF=1, ALUNO=2, FUNC=3, PROF_BASICA=4, OUTROS=5;
    //const int A_VISTA=1, DEBITO=2, CREDITO=3, PIX=4, BOLETO=5;
    //const char ABRIR='a', SALVAR='s', FECHAR='f', NOVO='n';

    tipo_inscricao inscr1 = PROF, inscr2 = OUTROS;
    if(inscr1 == PROF_BASICA)
        cout << "Professor da educação básica" << endl;
    inscr2 = (tipo_inscricao) 5; // cast - conversão forçada

    forma_pagamento pagamento1 = PIX, pagamento2 = DEBITO, pagamento3 = BOLETO;

    TipoSecao secao = MATINE;
    int horario[] = {05, 30};
    if(horario[0] > 22 || horario[0] <8) 
        secao = MADRUGADA;

    cout << secao << endl;
    return 0;
}