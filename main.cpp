#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <lista.h>
#include <no.h>

using namespace std;

int main(int argc, char * argv[]){
    Lista * l = new Lista;
    string nomeDoArq, linha;
    ofstream arq;    

    if (argc == 2)
        nomeDoArq = argv[1];
    else{
        cout << "Por favor, digite o nome do arquivo." << endl;
        getline(cin, nomeDoArq);
    }

    l->E(nomeDoArq, arq);
    l->adicionarNo("victor é lindo");
    l->adicionarNo("e gostoso");
    l->adicionarNo("demais");
    l->W(nomeDoArq);
    l->L();

    delete (l);

    return 0;
}
