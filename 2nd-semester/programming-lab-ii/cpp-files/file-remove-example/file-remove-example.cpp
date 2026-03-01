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
    cout << "EXEMPLO - FUNÇÃO remove()\n" << endl;

    // Abertura do arquivo em modo de leitura
    filePointer = fopen("remove().txt", "r");

    // Lógica condicional para validar abertura do arquivo
    if (filePointer == NULL) {
        cout << "Erro na abertura do arquivo. Fim do programa!" << endl;
        exit(1);
    }

    cout << "Arquivo aberto com sucesso!" << endl;

    // Fechamento do arquivo
    fclose(filePointer);

    // Função para deletar o arquivo fisicamente do disco
    if(remove("remove().txt")) {
        cout << "\nErro na exclusão do arquivo. Fim do programa!" << endl;
    } else {
        cout << "\nArquivo excluído com sucesso!" << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Escreva um programa para exemplificar o uso da função remove().
*/
