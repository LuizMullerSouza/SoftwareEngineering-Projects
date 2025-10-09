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
    int n, p_impar = 1, s_par = 0, i;

    cout << "PRODUTO DOS �MPARES E SOMA DOS PARES\n" << endl;

    // La�o para entrada e leitura dos 10 n�meros
    for (i = 1; i <= 10; i++) {

        cout << "Informe o " << i << "� n�mero: ";
        cin >> n;

        // Condi��o para verificar paridade
        if (n % 2 == 0) {
            s_par += n;
        } else {
            p_impar *= n;
        }
    }

    // Condi��o para exibir o resultado �mpar
     if (p_impar != 1) {
         cout << "\nProduto dos n�meros �mpares: " << p_impar;
     } else {
         cout << "\nProduto dos n�meros �mpares: nenhum n�mero �mpar foi digitado.";
     }

     // Condi��o para exibir o resultado par
     if (s_par != 0) {
         cout << "\nSoma dos n�meros pares: " << s_par << endl;
     } else {
         cout << "\nSoma dos n�meros pares: nenhum n�mero par foi digitado." << endl;
     }

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para ler 10 n�meros inteiros aleat�rios e calcular e mostrar o
    produto dos n�meros �mpares e a soma dos n�meros pares.
*/
