#include <iostream>
#include <funcoes.h>
#include <fstream>

using namespace std;

void H (){ //comando ajuda
    cout << "COMANDO" << "\t\t" << "DESCRIÇÃO" << endl;
    cout << "W [<name>]" << endl << "\t\t" << "Salva todas as linhas do texto em um arquivo ascii name. O comando sem o fornecimento de um nome simplesmente grava o texto no arquivo atual. Se o nome do arquivo atual ainda não foi fornecido o programa deve solicitar um nome ao usuário." << endl << endl;
    cout << "E <name>" << endl << "\t\t" << "Lê para a memória todas as linhas do texto do arquivo ascii name. Se o arquivo não existir um novo arquivo vazio name deve ser criado." << endl << endl;
    cout << "I [n]" << endl << "\t\t" << "Entra no modo de edição, permitindo a inserção de texto antes da linha n. Se n não for fornecido, o texto é inserido antes da linha atual." << endl << endl;
    cout << "A [n]" << endl << "\t\t" << "Entra no modo de edição, permitindo a inserção de texto depois da linha n. Se n não é fornecido, o texto é inserido depois da linha atual." << endl << endl;
    cout << "M [n]" << endl << "\t\t" << "Torna n a linha atual. Se n não é fornecido então a última linha do texto pasa a sr a atual." << endl << endl;
    cout << "D [n[m]]" << endl << "\t\t" << "Remove linhasn até m. Se apenas n é fornecido ." << endl << endl;


}
