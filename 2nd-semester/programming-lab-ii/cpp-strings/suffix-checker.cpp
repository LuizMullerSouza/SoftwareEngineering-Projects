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
    int length1, length2;
    int isSuffix = 1;
    char firstString[TAM], secondString[TAM];

    // Título
    cout << "VERIFICADOR DE FINAL DE STRINGS\n" << endl;

    // Entrada e leitura de dados
    cout << "Digite a primeira string (máx 80 caracteres): ";
    gets(firstString);
    length1 = strlen(firstString);

    cout << "Digite a segunda string (máx 80 caracteres): ";
    gets(secondString);
    length2 = strlen(secondString);

    // Lógica condicional
    if (length2 > length1) {
        isSuffix = 0;
    } else {
        // Loop de verificação
        for (int i = length2; i >= 0; i--) {

            if (firstString[length1] != secondString[i]) {
                isSuffix = 0;
                break;
            }
            // Decremento
            length1--;
        }
    }

    // Lógica condicional para o resultado
    if (isSuffix == 1) {
        cout << endl << "\"" << secondString << "\" ESTÁ contido no final de \"" << firstString << "\"." << endl;
    } else {
        cout << endl << "\"" << secondString << "\" NÃO ESTÁ contido no final de \"" << firstString << "\"." << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia duas cadeias de caracteres fornecidas
    pelo usuário. A seguir, o programa deverá verificar se a segunda
    cadeia lida está contida no final da primeira. E por fim, apresentar o
    resultado da verificação.
*/
