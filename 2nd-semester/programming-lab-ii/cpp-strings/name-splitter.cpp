// Bibliotecas
#include <iostream>
#include <cstring>
#include <locale.h>

// Constantes
#define TAM 81

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int i = 0, j = 0;
    char fullName[TAM], firstName[TAM], lastName[TAM];

    // Título
    cout << "SEPARADOR DE NOME E SOBRENOME" << endl;

    // Entrada e leitura de dados
    cout << "\nInforme seu nome completo: ";
    gets(fullName);

    // Inicializa as strings de destino como vazias
    firstName[0] = '\0';
    lastName[0] = '\0';

    // Leitura do primeiro nome
    while (fullName[i] != ' ' && fullName[i] != '\0') {
        firstName[i] = fullName[i];
        i++;
    }

    // Finalizando a string do primeiro nome
    firstName[i] = '\0';

    // Leitura do(s) sobrenome(s)
    if (fullName[i] == ' ') {
        i++;

        // Copiando os caracteres
        while (fullName[i] != '\0') {
            lastName[j] = fullName[i];
            i++;
            j++;
        }
    }

    // Finalizando a string do(s) sobrenome(s)
    lastName[j] = '\0';

    // Resultado
    cout << endl << "Nome: " << firstName << endl
         << "Sobrenome: " << lastName << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia o nome completo de uma pessoa em
    uma string. A seguir, o programa deverá separá-lo em nome e
    sobrenome em duas outras strings. No final, o programa deverá
    apresentar, separadamente, o nome e o sobrenome da pessoa.
    Exemplo:
    Nome Completo: Maria Torres Ferreira
    Nome: Maria
    Sobrenome: Torres Ferreira
*/
