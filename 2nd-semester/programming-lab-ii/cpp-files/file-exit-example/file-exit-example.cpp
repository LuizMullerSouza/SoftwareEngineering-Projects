// Bibliotecas
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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
    cout << "EXEMPLO - FUNÇÃO exit()\n" << endl;

    // Abertura do arquivo em modo de leitura
    filePointer = fopen("exit().txt", "r");

    // Lógica condicional para validar abertura do arquivo
    if (filePointer == NULL) {

        cout << "Erro na abertura do arquivo. Fim do programa!" << endl;

        // Função que aborta imediatamente todo o processo do programa
        exit(1);

    }

    cout << "Arquivo aberto com sucesso!" << endl;

    // Fechamento do arquivo
    if(fclose(filePointer)) {
        cout << "\nErro no encerramento do arquivo. Fim do programa!" << endl;
    } else {
        cout << "\nArquivo fechado com sucesso!" << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Escreva um programa para exemplificar o uso da função exit().
*/
