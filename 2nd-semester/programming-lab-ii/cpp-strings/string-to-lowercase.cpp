// Bibliotecas
#include <iostream>
#include <cstring>
#include <locale.h>

// Importa��o de ferramentas
using namespace std;

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    char phrase[31];

    // T�tulo
    cout << "CONVERSOR DE MAI�SCULO PARA MIN�SCULO" << endl;

    // Entrada e leitura de dados
    cout << "\nInforme uma frase em mai�sculo (m�x 30 caracteres): ";
    gets(phrase);

    // Convers�o e resultado
    cout << "\nFrase em min�sculo: " << strlwr(phrase) << endl;

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para ler uma frase em mai�sculo
    e apresent�-la novamente em min�sculo.
*/
