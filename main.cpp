#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <lista.h>
#include <no.h>
#include <funcoes.h>

using namespace std;

int main(int argc, char * argv[]){
    Lista l;
    char c;
    string frase = "", nomeDoArquivo, nada = "";

    c = getchar();

    while ( c != 27 ){
        if ( c != 10 )
            frase += c;
        else{
            l.adicionarNo( frase );
            frase.clear();
        }
        c = getchar();
    }

    l.W(argv[1]);
    l.E(argv[1]);
    l.imprimeLista();

    return 0;
}
