#ifndef LISTA_H
#define LISTA_H
#include <no.h>
#include <iostream>
#include <string>

using namespace std;

class Lista
{
    private:
        No * inicio;
        int tamanho;

    public:
        Lista();
};

/*int adicionarNo (string dado){
    No * n = new No;

    n -> proximo = NULL;
    inicio -> n;
    n -> valor = dado;
}*/



#endif // LISTA_H
