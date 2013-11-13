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
        ~Lista();
        int adicionarNo ( string dado );
        void imprimeLista ();
};


#endif // LISTA_H
