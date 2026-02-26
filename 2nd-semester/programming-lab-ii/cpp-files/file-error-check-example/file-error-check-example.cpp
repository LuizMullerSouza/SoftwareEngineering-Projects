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
    cout << "EXEMPLO - FUNÇÃO ferror()\n" << endl;

    // Abertura do arquivo em modo de anexação
    filePointer = fopen("ferror().txt", "a");

    // Lógica condicional para validar abertura do arquivo
    if (filePointer == NULL) {

        cout << "Erro na abertura do arquivo. Fim do programa!" << endl;
        return 1;

    } else {

        // Leitura do caractere a ser gravado
        cout << "Digite um caractere: ";
        cin >> inputChar;

        // Escreve o caractere no arquivo
        fputc(inputChar, filePointer);

        // Verifica se ocorreu algum erro durante a gravação no fluxo de dados
        if (ferror(filePointer)) {
            cout << "\nErro na gravação do arquivo!" << endl;
        } else {
            cout << "\nCaractere gravado no arquivo com sucesso!" << endl;
        }

        // Fechamento do arquivo
        fclose(filePointer);
    }

    // Executado com sucesso
    return 0;
}

/*
    Escreva um programa para exemplificar o uso do ferror().
*/
