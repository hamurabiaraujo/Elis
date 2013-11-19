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
        void W (char * nome );
        void E (char * nome);

};


#endif // LISTA_H
