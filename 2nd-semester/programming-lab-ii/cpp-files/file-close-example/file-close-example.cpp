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

    // Título
    cout << "EXEMPLO - FUNÇÃO fclose()\n" << endl;

    // Abertura do arquivo em modo de leitura
    filePointer = fopen("fclose().txt", "r");

    // Lógica condicional para validar existência do arquivo
    if (filePointer == NULL) {

        cout << "Erro na abertura do arquivo. Fim do programa!" << endl;

    } else {

        cout << "Arquivo aberto com sucesso!" << endl;

        // Caso o retorno do ponteiro seja diferente de zero, houve alguma falha no encerramento do arquivo
        if(fclose(filePointer)) {
            cout << "Erro no encerramento do arquivo. Fim do programa!" << endl;
        } else {
            cout << "Arquivo fechado com sucesso!" << endl;
        }

    }

    // Executado com sucesso
    return 0;
}

/*
    Escreva um programa para exemplificar o uso do fclose().
*/
