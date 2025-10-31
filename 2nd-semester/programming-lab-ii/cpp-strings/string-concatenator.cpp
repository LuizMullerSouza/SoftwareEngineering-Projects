// Bibliotecas
#include <iostream>
#include <cstring>
#include <locale.h>

// Constantes
#define TAM 31

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    char firstString[TAM], secondString[TAM];

    // Título
    cout << "CONCATENADOR DE STRINGS" << endl;

    // Entrada e leitura de dados
    cout << "\nDigite a primeira string (máx 30 caracteres): ";
    gets(firstString);

    cout << "Digite a segunda string (máx 30 caracteres): ";
    gets(secondString);

    // Concatenação e resultado
    cout << "\nString concatenada: " << strcat(firstString, secondString) << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para concatenar duas strings lidas do usuário.
    A segunda string deverá ser concatenada na primeira.
    Exemplo: string1: sol string2: lua
    Após concatenar string1: sollua string2: lua
*/
