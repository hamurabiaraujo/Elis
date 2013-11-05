#include <iostream>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

int main(){

    char letra;
    string frase;

    do {
        letra = getwchar();
        frase += letra;
    } while (letra != 27);

    cout << frase << endl;

    cout << "DIgitou esc@" << endl;

    return 0;
}
