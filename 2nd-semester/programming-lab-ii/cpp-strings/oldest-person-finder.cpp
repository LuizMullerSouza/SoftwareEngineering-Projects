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
    int i = 0, flag = 0, currentAge, oldestAge = 0;
    char currentName[TAM], oldestPersonName[TAM];

    // Título
    cout << "ENCONTRADOR DA PESSOA MAIS VELHA" << endl;

    // Loop de leitura
    do {

        cout << "\n--- Pessoa " << i + 1 << " ---" << endl;
        cout << "Informe o nome: ";
        fflush(stdin);
        gets(currentName);

        cout << "Informe a idade (ou idade negativa para parar): ";
        cin >> currentAge;

        // Lógica de verificação
        if (currentAge >= 0 && strlen(currentName) > 0) {

            if (flag == 0 || currentAge > oldestAge) {
                oldestAge = currentAge;
                strcpy(oldestPersonName, currentName);
                flag = 1;
            }
        }

        // Incremento
        i++;
    } while (currentAge >= 0 && i < 10);

    // Lógica condicional para o resultado
    if (flag == 1) {
        cout << "\n--- Resultado ---" << endl;
        cout << "Pessoa mais velha: " << oldestPersonName << endl;
        cout << "Idade: " << oldestAge << endl;
    } else {
        cout << "\nNenhum dado válido foi inserido." << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia a idade e o nome de 10 pessoas.
    O programa deverá terminar quando uma idade negativa for
    digitada. Ao terminar, o programa deverá escrever o nome e
    a idade da pessoa mais velha.
*/
