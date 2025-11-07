// Bibliotecas
#include <iostream>
#include <cstring>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    char word[20];
    int i, length, isPalindrome = 1;

    // Título
    cout << "VERIFICADOR DE PALÍNDROMOS\n" << endl;

    // Entrada e leitura de dados
    do {
        cout << "Digite uma palavra (máx. 15 letras): ";
        gets(word);
        length = strlen(word);

        if (length > 15) {
            cout << "A palavra tem mais de 15 letras! Digite novamente.\n" << endl;
        }
    } while (length > 15);

    // Loop de verificação
    for(i = 0; i < length / 2; i++) {

        if (tolower(word[i]) != tolower(word[length - 1 - i])) {
            isPalindrome = 0;
            break;
        }
    }

    // Resultado
    if (isPalindrome == 1) {
        cout << "\nA palavra \"" << word << "\" É um palíndromo.\n";
    } else {
        cout << "\nA palavra \"" << word << "\" NÃO é um palíndromo.\n";
    }

    // Executado com sucesso
    return 0;
}

/*
    Uma palavra é um palíndromo quando é a mesma lida da esquerda para
    a direita ou vice-versa. Por exemplo, a palavra ANILINA é um palíndromo,
    já a palavra AMOR não é. Faça um programa que leia uma palavra de no
    máximo 15 letras e mostre se ela é um palíndromo ou não.
*/
