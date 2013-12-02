#ifndef NO_H
#define NO_H
#include <string>
#include <iostream>

using namespace std;

class No
{
    private:
        No * proximo;
        string valor;

    public:
        No();
        ~No();
        void setProximo (No *prox );
        void setValor ( string s );
        No * getProximo () const;
        string getValor () const;
};

#endif // NO_H
