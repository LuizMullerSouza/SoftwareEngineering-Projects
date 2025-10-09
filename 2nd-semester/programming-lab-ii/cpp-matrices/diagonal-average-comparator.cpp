// Bibliotecas
#include <iostream>
#include <locale.h>

// Importa��o de ferramentas
using namespace std;

// Fun��o principal
int main () {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int mat[5][5];
    int i, j;
    float media_principal = 0, media_secundaria = 0;

    cout << "VERIFICADOR DE DIAGONAIS\n" << endl;

    cout << "Leitura da Matriz 5x5\n";

    // La�os para entrada e leitura de valores da matriz
    for(i = 0; i < 5; i++) {
        cout << endl;

        for(j = 0; j < 5; j++) {

            cout << "LINHA " << i+1 << " - COLUNA " << j+1 << ": ";
            cin >> mat[i][j];

            // Somador da diagonal principal
            if (i == j)
                media_principal += mat[i][j];

            // Somador da diagonal secund�ria
            if (i + j == 5 - 1)
                media_secundaria += mat[i][j];
        }
    }

    // Resultado
    if (media_principal / 5.0 == media_secundaria / 5.0)
        cout << "\nA m�dia da diagonal principal � IGUAL a m�dia da diagonal secund�ria." << endl;
    else
        cout << "\nA m�dia da diagonal principal � DIFERENTE da m�dia da diagonal secund�ria." << endl;

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que leia uma matriz 5x5 de n�meros inteiros e que verifica se a m�dia dos
    elementos da diagonal principal � igual ou n�o a m�dia dos elementos da diagonal secund�ria.
*/
