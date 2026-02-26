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
    cout << "EXEMPLO - FUNÇÃO fopen()\n" << endl;

    // Abertura ou criação do arquivo em modo de escrita
    filePointer = fopen("fopen().txt", "w");

    // Caso o retorno do ponteiro seja nulo, houve alguma falha na abertura ou criação do arquivo
    if (filePointer == NULL) {
        cout << "Erro na abertura do arquivo. Fim do programa!" << endl;
    } else {
        cout << "Arquivo criado com sucesso!" << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Escreva um programa para exemplificar o uso da função fopen().
*/
