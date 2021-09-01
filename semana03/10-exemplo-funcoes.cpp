#include <iostream>
#include <cmath>

using namespace std;

//imprimeCabecalho
void imprime_cabecalho (){
    cout << "Universidade do Estado do Rio Grande do Norte\n \
Disciplina: Programação Estruturada\n \
Exemplo: Calculadora com funções" << endl;
}

double primeiro_numero, segundo_numero;
char operacao;

//leExpressao
void le_expressao(){
    cout << "Digite uma expressão do tipo NUM OP NUM " << endl;
    cin >> primeiro_numero >> operacao >> segundo_numero;
}

// calcula o valor da expressão
double calcula (){
    double resultado;
    switch(operacao){
        case '+':
            resultado = primeiro_numero + segundo_numero;
            break;
        case '-':
            resultado = primeiro_numero - segundo_numero;
            break;
        case '*':
            resultado = primeiro_numero * segundo_numero;
            break;
        case '/':
            resultado = primeiro_numero / segundo_numero;
            break;
        case '^':
            resultado = pow(primeiro_numero, segundo_numero);
            break;
        default:
            cerr << "Operador inválido!" << endl;
            exit(EXIT_FAILURE);
    }
    return resultado;
}

//exibeResultado

void exibe_resultado(double resultado){
    cout << "O resultado da operação é: " << resultado << endl;
}


int main(){

    imprime_cabecalho();
    
    le_expressao();

    double resultado = calcula();

    exibe_resultado(resultado);

    return 0;
}

