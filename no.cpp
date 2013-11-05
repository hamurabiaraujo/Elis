#include "no.h"

No::No(){

}

void No::setProximo ( No &prox ){
    this->proximo = &prox;
}

void No::setValor ( string s ){
    this->valor = s;
}

No * No::getProximo () const{
    return this->proximo;
}

string No::getValor () const{
    return this->valor;
}
