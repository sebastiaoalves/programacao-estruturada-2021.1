#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv){  // char [][] ==> string []
    cout << "Foram passados " << argc << " argumentos na linha de comando" << endl;
    for(int i=0;i<argc;i++)
        cout << "O " << (i+1) << "° argumento passado foi : " << argv[i] << endl;

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    cout << "A soma de " << num1 << " e " << num2 << " é " << num1+num2 << endl;
    return 0;
}