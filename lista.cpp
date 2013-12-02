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

/*================ MÉTODOS PARA ADICIONAR NÓ À LISTA ================*/
int Lista::adicionarNo ( string dado, int n ){ //adiciona nó na posição 'n'
    No * n1 = new No, * n2 = this->inicio, * auxiliar = new No;
    int i;

    if ( n1 && n2 ){
        for ( i = 0; i < n-1; i++){
            n2 = n2->getProximo();
        }

        auxiliar = (n2->getProximo());
        n2->setProximo(n1);
        n1->setValor(dado);
        n1->setProximo(auxiliar);

        return 1;
    }
    return 0;
}

int Lista::adicionarNo ( string dado ){ //adiciona um nó no fim da lista
    No * n1 = new No, * n2 = this->inicio;
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


/*================ MÉTODO DE AJUDA ================*/
void Lista::H (){ //comando ajuda
    cout << "COMANDO" << "\t\t" << "DESCRIÇÃO" << endl;
    cout << "W [<name>]" << endl << "\t\t" << "Salva todas as linhas do texto em um arquivo ascii name. O comando sem o fornecimento de um nome simplesmente grava o texto no arquivo atual. Se o nome do arquivo atual ainda não foi fornecido o programa deve solicitar um nome ao usuário." << endl << endl;
    cout << "E <name>" << endl << "\t\t" << "Lê para a memória todas as linhas do texto do arquivo ascii name. Se o arquivo não existir um novo arquivo vazio name deve ser criado." << endl << endl;
    cout << "I [n]" << endl << "\t\t" << "Entra no modo de edição, permitindo a inserção de texto antes da linha n. Se n não for fornecido, o texto é inserido antes da linha atual." << endl << endl;
    cout << "A [n]" << endl << "\t\t" << "Entra no modo de edição, permitindo a inserção de texto depois da linha n. Se n não é fornecido, o texto é inserido depois da linha atual." << endl << endl;
    cout << "M [n]" << endl << "\t\t" << "Torna n a linha atual. Se n não é fornecido então a última linha do texto pasa a sr a atual." << endl << endl;
    cout << "D [n[m]]" << endl << "\t\t" << "Remove linhasn até m. Se apenas n é fornecido ." << endl << endl;
}

/*================ MÉTODOS PARA SALVAR NO ARQUIVO ================*/

void Lista::W ( string nome ){ // função salva os dados da lista no arquivo com nome pré-definido
    ofstream arq (nome.data()); //abre o canal de saída de dados
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

/*================ MÉTODO PARA LER DADOS DO ARQUIVO ================*/

void Lista::E (string nome, ofstream& novoArq){ // lê do arquivo ou cria um novo, caso não exista nenhum com o nome passado
    ifstream arq (nome.data()); //abre o canal de entrada de dados
    string linha;

    if (arq.is_open()){ //testa se ocorreu algum erro na abertura do arquivo
        while ( getline (arq, linha) ){
            this->adicionarNo(linha);
        }
    }else{
        novoArq.open(nome.data(), ofstream::trunc); //abre o canal de saída de dados e irá apagar tudo que estiver no arquivo (mode trunc)

        if (novoArq.is_open())
            cout << "Arquivo criado: " << nome << endl;
        else cout << "Erro ao criar o arquivo " << nome << endl;
    }
}

/*================ MÉTODOS PARA LISTAR ================*/

void Lista::L ( int n, int m ){ //lista as linhas de n até m
    No * no = this->inicio;
    int i = 0;

    if (no->getProximo() != NULL){
        for ( i = 0; i <= m; i++, no = no->getProximo()){
            if (i >= n)
                cout << i << "> " << (no->getValor()) << endl;
        }
    }else return;
}

void Lista::L ( int n ){ //lista até a linha n
    No * no = inicio->getProximo();
    int i = 1;

    if (no->getProximo() != NULL){
        for ( i = 1; i <= n; i++, no = no->getProximo())
            cout << i << "> " << (no->getValor()) << endl;
    }else return;
}

void Lista::L (){ //lista o arquivo inteiro
    No * no = this->inicio->getProximo();
    int i = 1;

    if (no->getProximo() != NULL){
        while ( 1 ){
            if (no != NULL ){
                cout << i << "> " << (no->getValor()) << endl;
                no = no->getProximo();
            }else break;
            i++;
        }
    }else return;
}

/*================ MÉTODOS PARA DELETAR ================*/

void Lista::D (int n, int m){
    No * no = this->inicio, * anterior, * auxiliar;
    int i = 0;

    for (i = 0; i < n; i++){
        anterior = no;
        no = no->getProximo();
    }

    for (i = n; i <= m; i++){
        auxiliar = no;
        auxiliar->setProximo(NULL); //com delete não dava certo, então vai na gambiarra mermo =D
        no = no->getProximo();

    }

    anterior->setProximo(no);
}

void Lista::D (int n){//terminar
    No * no = this->inicio, * anterior, * auxiliar;
    int i = 0;

    for (i = 0; i < n; i++){
        anterior = no;
        no = no->getProximo();
    }

    anterior->setProximo(no);
}
