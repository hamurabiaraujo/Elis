#include "no.h"
#include <iostream>

using namespace std;

No::No(){
    //cout << "Criado um novo nó" << endl;
    this->proximo = NULL;
}

No::~No(){
    delete this->proximo;
}

void No::setProximo ( No * prox ){
    this->proximo = prox;
    //cout << "setProximo( " << prox << ")" << endl;
}

void No::setValor ( string s ){
    this->valor = s;
    //cout << "setValor( " << s << ")" << endl;
}

No * No::getProximo () const{
    //cout << "getProximo( " << this->proximo << ")" << endl;
    return (this->proximo);
}

string No::getValor () const{
    //cout << "getValor( " << this->valor << ")" << endl;
    return (this->valor);
}
