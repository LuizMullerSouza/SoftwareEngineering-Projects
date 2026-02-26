// Bibliotecas
#include <iostream>
#include <stdio.h>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Ponteiro
    FILE *filePointer;

    // Variáveis
    char readChar;
    int eofCount = 0;

    // Título
    cout << "EXEMPLO - FUNÇÃO feof()\n" << endl;

    // Abertura do arquivo em modo de leitura
    filePointer = fopen("feof().txt", "r");

    // Lógica condicional para validar abertura do arquivo
    if (filePointer == NULL) {
        cout << "Erro na abertura do arquivo. Fim do programa!" << endl;
        return 1;
    }

    // Leitura do primeiro caractere antes de chamar a função feof()
    readChar = fgetc(filePointer);

    cout << "Caracteres lidos: ";

    // Loop para exibir os caracteres enquanto o fim do arquivo não for atingido
    while (!feof(filePointer)) {

        eofCount++;

        // Verificação de erro durante a leitura
        if (ferror(filePointer)) {
            cout << "\nErro na leitura do caractere!";
            break;
        }

        // Exibição do caractere lido
        cout << readChar;

        // Leitura do próximo caractere no final do laço para atualizar o status do feof()
        readChar = fgetc(filePointer);
    }

    cout << "\n\nA função feof() captou " << eofCount << " caractere(s)!" << endl;

    // Fechamento do arquivo
    fclose(filePointer);

    // Executado com sucesso
    return 0;
}

/*
    Escreva um programa para exemplificar o uso da função feof().
*/
