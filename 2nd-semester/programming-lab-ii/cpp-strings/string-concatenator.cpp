// Bibliotecas
#include <iostream>
#include <cstring>
#include <locale.h>

// Constantes
#define TAM 31

// Importa��o de ferramentas
using namespace std;

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    char firstString[TAM], secondString[TAM];

    // T�tulo
    cout << "CONCATENADOR DE STRINGS" << endl;

    // Entrada e leitura de dados
    cout << "\nDigite a primeira string (m�x 30 caracteres): ";
    gets(firstString);

    cout << "Digite a segunda string (m�x 30 caracteres): ";
    gets(secondString);

    // Concatena��o e resultado
    cout << "\nString concatenada: " << strcat(firstString, secondString) << endl;

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para concatenar duas strings lidas do usu�rio.
    A segunda string dever� ser concatenada na primeira.
    Exemplo: string1: sol string2: lua
    Ap�s concatenar string1: sollua string2: lua
*/
