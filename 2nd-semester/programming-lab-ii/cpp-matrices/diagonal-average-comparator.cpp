// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Função principal
int main () {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int mat[5][5];
    int i, j;
    float media_principal = 0, media_secundaria = 0;

    cout << "VERIFICADOR DE DIAGONAIS\n" << endl;

    cout << "Leitura da Matriz 5x5\n";

    // Laços para entrada e leitura de valores da matriz
    for(i = 0; i < 5; i++) {
        cout << endl;

        for(j = 0; j < 5; j++) {

            cout << "LINHA " << i+1 << " - COLUNA " << j+1 << ": ";
            cin >> mat[i][j];

            // Somador da diagonal principal
            if (i == j)
                media_principal += mat[i][j];

            // Somador da diagonal secundária
            if (i + j == 5 - 1)
                media_secundaria += mat[i][j];
        }
    }

    // Resultado
    if (media_principal / 5.0 == media_secundaria / 5.0)
        cout << "\nA média da diagonal principal é IGUAL a média da diagonal secundária." << endl;
    else
        cout << "\nA média da diagonal principal é DIFERENTE da média da diagonal secundária." << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia uma matriz 5x5 de números inteiros e que verifica se a média dos
    elementos da diagonal principal é igual ou não a média dos elementos da diagonal secundária.
*/
