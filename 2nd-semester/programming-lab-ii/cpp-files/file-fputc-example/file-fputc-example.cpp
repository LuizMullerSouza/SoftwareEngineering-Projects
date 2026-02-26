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
    char inputChar;

    // Título
    cout << "EXEMPLO - FUNÇÃO fputc()\n" << endl;

    // Abertura do arquivo em modo de anexação
    filePointer = fopen("fputc.txt", "a");

    // Lógica condicional para validar abertura do arquivo
    if (filePointer == NULL) {
        cout << "Erro na abertura do arquivo. Fim do programa!" << endl;
        return 1;
    }

    // Loop para gravação contínua de caracteres
    do {

        cout << "Digite um caractere ('0' para sair): ";
        cin >> inputChar;

        if(inputChar != '0') {

            // Grava o caractere no fluxo do arquivo
            fputc(inputChar, filePointer);

            // Verificação de erro durante a escrita
            if (ferror(filePointer)) {
                cout << "\nErro na gravação do arquivo!" << endl;
            }
        }

    } while (inputChar != '0');

    cout << "\nCaracteres gravados no arquivo com sucesso!" << endl;

    // Fechamento do arquivo
    fclose(filePointer);

    // Executado com sucesso
    return 0;
}

/*
    Escreva um programa para exemplificar o uso da função fputc().
*/
