// Bibliotecas
#include <iostream>
#include <locale.h>

// Constante
#define SIZE 10

// Importação de ferramentas
using namespace std;

// Protótipo da função
void calculateVectorFactorial(int inputArray[], int factorialArray[]);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int i, inputArray[SIZE], factorialArray[SIZE];

    // Título
    cout << "CALCULADOR DE FATORIAL POR VETORIZAÇÃO\n" << endl;

    cout << "Preenchendo o Vetor A - Tamanho " << SIZE << "\n" << endl;

    // Loop com validação para entrada e leitura dos dados do vetor
    for (i = 0; i < SIZE; i++) {

        do {

            cout << "Digite o " << i + 1 << "º valor: ";
            cin >> inputArray[i];

            if (inputArray[i] < 0) {
                cout << "Erro: não é possível calcular o fatorial de um número < 0. Tente novamente.\n" << endl;
            }

        } while (inputArray[i] < 0);

    }

    // Chamada da função
    calculateVectorFactorial(inputArray, factorialArray);

    cout << "\nVetor A - Original\n";

    // Exibição do vetor base
    for (i = 0; i < SIZE; i++) {
        cout << "[" << inputArray[i] << "] ";
    }

    cout << "\n\nVetor B - Fatoriais Calculados\n";

    // Exibição do vetor resultado
    for (i = 0; i < SIZE; i++) {
        cout << "[" << factorialArray[i] << "] ";
    }

    cout << endl;

    // Executado com sucesso
    return 0;
}

// Função para calcular o fatorial de cada índice do vetor
void calculateVectorFactorial(int inputArray[], int factorialArray[]) {

    // Variáveis locais
    int i, j;

    // Loop para varrer o vetor
    for (i = 0; i < SIZE; i++) {

        // Inicialização do índice atual
        factorialArray[i] = 1;

        // Cálculo do fatorial
        for (j = 1; j <= inputArray[i]; j++) {
            factorialArray[i] *= j;
        }
    }
}

/*
    Faça um programa possuindo uma função que receba um vetor A de dez
    elementos inteiros como parâmetro. Ao final dessa função, deverá ter
    sido gerado um vetor B contendo o fatorial de cada elemento de A. O
    vetor B deverá ser mostrado no programa principal.
*/
