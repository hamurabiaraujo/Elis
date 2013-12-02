#include "no.h"
#include <iostream>

using namespace std;

No::No(){
    this->proximo = NULL;
}

No::~No(){
    delete this->proximo;
}

void No::setProximo ( No * prox ){
    this->proximo = prox;
}

void No::setValor ( string s ){
    this->valor = s;
}

No * No::getProximo () const{
    return (this->proximo);
}

string No::getValor () const{
    return (this->valor);
}
