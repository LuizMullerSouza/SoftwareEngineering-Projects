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

    // Variável
    char readChar;

    // Título
    cout << "EXEMPLO - FUNÇÃO fgetc()\n" << endl;

    // Abertura do arquivo em modo de leitura
    filePointer = fopen("fgetc().txt", "r");

    // Lógica condicional para validar abertura do arquivo
    if (filePointer == NULL) {
        cout << "Erro na abertura do arquivo. Fim do programa!" << endl;
        return 1;
    }

    // Leitura do primeiro caractere
    readChar = fgetc(filePointer);

    cout << "Caracteres lidos: ";

    // Loop para exibir os caracteres enquanto o fim do arquivo não for atingido
    while (!feof(filePointer)) {

        // Verificação de erro durante a leitura
        if (ferror(filePointer)) {
            cout << "\nErro na leitura do caractere!";
            break;
        }

        // Exibição do caractere capturado
        cout << readChar;

        // Leitura do próximo caractere
        readChar = fgetc(filePointer);
    }

    cout << endl;

    // Fechamento do arquivo
    fclose(filePointer);

    // Executado com sucesso
    return 0;
}

/*
    Escreva um programa para exemplificar o uso da função fgetc().
*/
