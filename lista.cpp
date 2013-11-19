#include "lista.h"
#include "no.h"
#include <iostream>
#include <fstream>
#include <string>

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

void Lista::W ( /*int qtdArgumentos, */char * nome ){ // função salva os dados da lista no arquivo com nome pré-definido
    /*string nomeInserido = "";
    char c;
    if (qtdArgumentos == 1){
        cout << "Por favor, digite o nome do arquivo que deseja salvar." << endl;
        c = getchar();
        while ( c != 10 ){
            nomeInserido += c;
            c = getchar();
        }
        *nome = nomeInserido.data();
    }*/
    ofstream arq (nome); //abre o canal de saída de dados
    No * n = (this->inicio)->getProximo();

    if ( arq.is_open() ){ //testa se ocorreu algum erro na abertura do arquivo
        for ( ; n != NULL; n = n->getProximo()){
            arq << n->getValor() << endl;
        }
        arq.close();
    }else{
        cout << "Ocorreu um problema ao abrir o arquivo!" << endl;
    }
}

void Lista::E ( char * nome ){
    ifstream arq (nome); //abre o canal de entrada de dados
    string linha;

    if (arq.is_open()){ //testa se ocorreu algum erro na abertura do arquivo
        while ( getline (arq, linha) ){
            this->adicionarNo(linha);
        }
    }else
        cout << "Ocorreu um problema ao abrir o arquivo!" << endl;
}
