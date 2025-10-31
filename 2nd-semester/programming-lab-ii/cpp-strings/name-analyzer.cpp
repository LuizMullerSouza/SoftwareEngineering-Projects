// Bibliotecas
#include <iostream>
#include <cstring>
#include <locale.h>

// Constantes
#define TAM 51

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    char currentName[TAM], shortestName[TAM], longestName[TAM];
    int currentLength, countEndsWithA = 0;

    // Título
    cout << "ANALISADOR DE LISTA DE NOMES" << endl;

    // Loop de leitura
    int i = 0;
    while (i < 10) {

        // Entrada e leitura de dados
        cout << "\nInforme o " << i + 1 << "° nome (máx 50 caracteres): ";
        gets(currentName);

        // Lógica de comparação
        if (i == 0) {
            strcpy(shortestName, currentName);
            strcpy(longestName, currentName);
        } else {
            // Verifica o menor nome
            if (strlen(currentName) > 0 && (strlen(currentName) < strlen(shortestName))) {
                strcpy(shortestName, currentName);
            }
            // Verifica o maior nome
            if (strlen(currentName) > 0 && (strlen(currentName) > strlen(longestName))) {
                strcpy(longestName, currentName);
            }
        }

        // Lógica para contagem da Letra 'A'
        currentLength = strlen(currentName);
        if (currentLength > 0 && (currentName[currentLength - 1] == 'A' || currentName[currentLength - 1] == 'a')) {
            countEndsWithA++;
        }

        i++;
    };

    // Resultado
    cout << endl << "Menor nome digitado: " << shortestName << endl
         << "Maior nome digitado: " << longestName << endl
         << "Quantidade de nomes terminados em 'A': " << countEndsWithA << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler 10 nomes dentro
    de um while e, em seguida, apresentar:
    - O nome mais curto;
    - O nome mais longo;
    - Quantidade de nomes que terminam com a letra 'A';
*/
