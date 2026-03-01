// Bibliotecas
#include <iostream>
#include <string.h>
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
    char inputString[SIZE];

    // Título
    cout << "EXEMPLO - FUNÇÃO fputs()\n" << endl;

    // Abertura do arquivo em modo de anexação
    filePointer = fopen("fputs().txt", "a");

    // Lógica condicional para validar abertura do arquivo
    if (filePointer == NULL) {
        cout << "Erro na abertura do arquivo. Fim do programa!" << endl;
        return 1;
    }

    // Leitura da primeira string inserida pelo usuário
    do {

        cout << "Digite uma cadeia de caracteres ou \"FIM\" para sair (máx. 50 letras): ";
        gets(inputString);

        if (strlen(inputString) > 50) {
            cout << "A palavra tem mais de 50 letras! Digite novamente.\n" << endl;
        }

    } while (strlen(inputString) > 50);

    // Loop para ler novas strings ou encerrar a leitura
    while (strcmp(inputString, "FIM") != 0) {

        // Gravação da string lida
        fputs(inputString, filePointer);
        fputc('\n', filePointer);

        // Verificação de erro durante a escrita no arquivo
        if (ferror(filePointer)) {
            cout << "\nErro na gravação do arquivo!" << endl;
        } else {
            cout << "Cadeia de caracteres gravada no arquivo com sucesso!" << endl;
        }

        // Nova leitura de string
        do {

            cout << "\nDigite uma nova cadeia de caracteres ou \"FIM\" para sair (máx. 50 letras): ";
            gets(inputString);

            if (strlen(inputString) > 50) {
                cout << "\nA palavra tem mais de 50 letras! Digite novamente." << endl;
            }

        } while (strlen(inputString) > 50);
    }

    cout << "\nGravações encerradas para o arquivo." << endl;

    // Fechamento do arquivo
    fclose(filePointer);

    // Executado com sucesso
    return 0;
}

/*
    Escreva um programa para exemplificar o uso da função fputs().
*/
