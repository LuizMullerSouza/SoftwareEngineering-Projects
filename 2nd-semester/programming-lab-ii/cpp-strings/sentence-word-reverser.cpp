// Bibliotecas
#include <iostream>
#include <cstring>
#include <locale.h>

// Constantes
#define TAM 101

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    char phrase[TAM], word[TAM], words[50][TAM];
    int wordCount = 0, i, j = 0, length;

    // Título
    cout << "INVERSOR DE PALAVRAS\n" << endl;

    // Entrada e leitura de dados
    cout << "Digite uma frase (máx. 100 caracteres): ";
    gets(phrase);

    length = strlen(phrase);

    // Loop para cálculo
    for(i = 0; i <= length; i++) {

        if(phrase[i] != ' ' && phrase[i] != '\0') {
            word[j] = phrase[i];
            j++;
        } else {
            word[j] = '\0';
            strcpy(words[wordCount], word);
            wordCount++;
            j = 0;
        }
    }

    // Resultado
    cout << "\nFrase invertida: ";
    for(i = wordCount - 1; i >= 0; i--) {
        cout << words[i];
        if(i != 0) {
           cout << " ";
        }
    }
    cout << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia uma frase, terminada com um
    <Enter> e imprima a mesma frase com suas palavras na ordem
    inversa. Considere que cada palavra é separada por apenas um
    caracter de espaço. Por exemplo:
    Entrada: Isto e apenas um exemplo
    Saída: exemplo um apenas e Isto
*/
