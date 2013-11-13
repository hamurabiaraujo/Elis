#include "lista.h"
#include "no.h"
#include <iostream>

using namespace std;

Lista::Lista(){
    inicio = new No;
}

Lista::~Lista(){
    delete this->inicio;
}

int Lista::adicionarNo ( string dado ){
    No * n1 = new No;
    No * n2 = this->inicio;
    if ( n1 && n2 ){
        while ( 1 ){
            if (n2->getProximo() != NULL )
                n2 = n2->getProximo();
            else break;
        }
        n2->setProximo(n1);
        n1->setProximo(NULL);
        n1->setValor(dado);

        return 1;
    }
    return 0;
}

void Lista::imprimeLista (){
    No * n = this->inicio;
    int i = 0;

    while ( 1 ){
        if (n != NULL ){
            if (i != 0)
                cout << i << "> ";
            cout << (n->getValor()) << endl;
            n = n->getProximo();
        }else break;
        i++;
    }
}
