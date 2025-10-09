// Bibliotecas
#include <iostream>
#include <locale.h>

// Importa��o de ferramentas
using namespace std;

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int mat[5][5];
    int x, i, j;

    cout << "MULTIPLICADOR DA TERCEIRA LINHA DA MATRIZ\n" << endl;

    cout << "Leitura da Matriz 5x5\n";

    // La�os para entrada e leitura de valores da matriz
    for(i = 0; i < 5; i++) {
        cout << endl;
        for(j = 0; j < 5; j++) {
            cout << "LINHA " << i+1 << " - COLUNA " << j+1 << ": ";
            cin >> mat[i][j];
        }
    }

    // Leitura do multiplicador
    cout << "\nInforme um valor para multiplicar a terceira linha da matriz: ";
    cin >> x;

    cout << "\nMatriz 5x5 modificada\n";

    // Resultado
    for(i = 0; i < 5; i++) {
        cout << endl;
        if (i == 2) {
            for(j = 0; j < 5; j++) {
                cout << mat[i][j] * x << " ";
            }
        } else {
            for(j = 0; j < 5; j++) {
                cout << mat[i][j] << " ";
            }
        }
    }

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para ler uma matriz 5x5 de n�meros inteiros e ler um n�mero
    inteiro x. A seguir, o programa deve multiplicar os elementos da terceira linha
    da matriz por x e exibir a matriz modificada.
*/
