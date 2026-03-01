// Bibliotecas
#include <iostream>
#include <stdio.h>
#include <locale.h>

// Constante
#define SIZE 51

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Ponteiro
    FILE *filePointer;

    // Variável
    char textBuffer[SIZE];

    // Título
    cout << "EXEMPLO - FUNÇÃO fgets()\n" << endl;

    // Abertura do arquivo em modo de leitura
    filePointer = fopen("fgets().txt", "r");

    // Lógica condicional para validar abertura do arquivo
    if (filePointer == NULL) {
        cout << "Erro na abertura do arquivo. Fim do programa!" << endl;
        return 1;
    }

    // Loop para realizar a leitura dos caracteres encontrados no arquivo
    while (fgets(textBuffer, SIZE, filePointer) != NULL) {

        // Verificação de erro durante a leitura
        if (ferror(filePointer)) {

            cout << "\nErro na leitura do arquivo!" << endl;
            break;

        } else {

            cout << "Caracteres lidos: " << textBuffer;

        }
    }

    cout << "\n\nLeitura concluída com sucesso." << endl;

    // Fechamento do arquivo
    fclose(filePointer);

    // Executado com sucesso
    return 0;
}

/*
    Escreva um programa para exemplificar o uso da função fgets().
*/
