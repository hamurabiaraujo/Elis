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
        int tamanho; // colocar como static

    public:
        Lista();
        ~Lista();
        int adicionarNo (string dado, int n);
        int adicionarNo (string dado);
        void imprimeLista ();
        void H ();
        void W (string nome );
        void E(string nome, ofstream &novoArq);
        void L (int n, int m);
        void L (int n);
        void L ();
        void D (int n, int m);
        void D (int n);
};


#endif // LISTA_H
