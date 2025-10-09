// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int n, i, flag = 2, soma = 0;

    cout << "SOMA DOS X PRIMEIROS NÚMEROS PARES\n" << endl;

    // Laço para entrada e leitura dos números
    do {
        cout << "Informe um número positivo maior que 1: ";
        cin >> n;

        if (n <= 1) {
            cout << "Erro: número informado é inválido. Tente novamente.\n" << endl;
        }
    } while (n <= 1);

    // Laço para realizar o cálculo
    for(i = 1; i <= n; i++) {
        soma += flag;
        flag += 2;
    }

    // Resultado
    cout << "\nSoma dos " << n << " primeiros números pares: " << soma << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler um número inteiro positivo n e calcular e mostrar a soma dos n
    primeiros números pares maiores do que zero (Por exemplo, se for informado n = 4, o algoritmo
    deve imprimir o valor 20, pois 2 + 4 + 6 + 8 = 20).
*/
