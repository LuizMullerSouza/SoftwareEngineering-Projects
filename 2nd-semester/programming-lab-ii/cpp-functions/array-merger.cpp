// Bibliotecas
#include <iostream>
#include <locale.h>

// Constante
#define SIZE 10

// Importação de ferramentas
using namespace std;

// Protótipo da função
void mergeArrays(int arrayA[], int arrayB[], int mergedArray[]);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int i, arrayA[SIZE], arrayB[SIZE], mergedArray[SIZE * 2];

    // Título
    cout << "MESCLADOR DE VETORES DISTINTOS\n" << endl;

    // Leitura dos dados do vetor A
    cout << "Preenchendo o Vetor A - Tamanho " << SIZE << "\n" << endl;

    for (i = 0; i < SIZE; i++) {

        do {
            cout << "Digite o " << i + 1 << "º valor inteiro positivo: ";
            cin >> arrayA[i];

            if (arrayA[i] < 0) {
                cout << "Erro: o valor deve ser >= 0. Tente novamente.\n" << endl;
            }

        } while (arrayA[i] < 0);
    }

    // Leitura dos dados do vetor B
    cout << "\nPreenchendo o Vetor B - Tamanho " << SIZE << "\n" << endl;

    for (i = 0; i < SIZE; i++) {

        do {
            cout << "Digite o " << i + 1 << "º valor inteiro positivo: ";
            cin >> arrayB[i];

            if (arrayB[i] < 0) {
                cout << "Erro: o valor deve ser >= 0. Tente novamente.\n" << endl;
            }

        } while (arrayB[i] < 0);
    }

    // Chamada da função
    mergeArrays(arrayA, arrayB, mergedArray);

    // Exibição do vetor A
    cout << "\nVetor A - Original" << endl;

    for (i = 0; i < SIZE; i++) {
        cout << "[" << arrayA[i] << "] ";
    }

    // Exibição do vetor B
    cout << "\n\nVetor B - Original" << endl;

    for (i = 0; i < SIZE; i++) {
        cout << "[" << arrayB[i] << "] ";
    }

    // Exibição do vetor C
    cout << "\n\nVetor C - União de A e B" << endl;

    for (i = 0; i < SIZE * 2; i++) {
        cout << "[" << mergedArray[i] << "] ";
    }

    cout << endl;

    // Executado com sucesso
    return 0;
}

// Função para mesclar os vetores
void mergeArrays(int arrayA[], int arrayB[], int mergedArray[]) {

    // Loop para preencher o vetor união
    for (int i = 0; i < SIZE; i++) {

        mergedArray[i] = arrayA[i];
        mergedArray[i + SIZE] = arrayB[i];

    }
}

/*
    Construa um programa contendo uma função que receba como parâmetro dois
    vetores de dez elementos inteiros positivos e mostre o vetor união dos
    dois primeiros.
*/
