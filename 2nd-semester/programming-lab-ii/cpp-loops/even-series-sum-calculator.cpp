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
    int n, i, flag = 2, soma = 0;

    cout << "SOMA DOS X PRIMEIROS N�MEROS PARES\n" << endl;

    // La�o para entrada e leitura dos n�meros
    do {
        cout << "Informe um n�mero positivo maior que 1: ";
        cin >> n;

        if (n <= 1) {
            cout << "Erro: n�mero informado � inv�lido. Tente novamente.\n" << endl;
        }
    } while (n <= 1);

    // La�o para realizar o c�lculo
    for(i = 1; i <= n; i++) {
        soma += flag;
        flag += 2;
    }

    // Resultado
    cout << "\nSoma dos " << n << " primeiros n�meros pares: " << soma << endl;

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para ler um n�mero inteiro positivo n e calcular e mostrar a soma dos n
    primeiros n�meros pares maiores do que zero (Por exemplo, se for informado n = 4, o algoritmo
    deve imprimir o valor 20, pois 2 + 4 + 6 + 8 = 20).
*/
