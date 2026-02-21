// Bibliotecas
#include <iostream>
#include <locale.h>

// Constante
#define SIZE 10

// Importação de ferramentas
using namespace std;

// Protótipo da função
void sortArrayDescending(int mergedArray[]);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int i, arrayA[SIZE], arrayB[SIZE], mergedArray[SIZE * 2];

    // Título
    cout << "MESCLADOR E ORDENADOR DECRESCENTE DE VETORES\n" << endl;

    // Leitura dos dados do vetor A e mesclagem simultânea
    cout << "Preenchendo o Vetor A - Tamanho " << SIZE << "\n" << endl;

    for (i = 0; i < SIZE; i++) {

        cout << "Digite o " << i + 1 << "º valor inteiro: ";
        cin >> arrayA[i];

        mergedArray[i] = arrayA[i];

    }

    // Leitura dos dados do vetor B e mesclagem simultânea
    cout << "\nPreenchendo o Vetor B - Tamanho " << SIZE << "\n" << endl;

    for (i = 0; i < SIZE; i++) {

        cout << "Digite o " << i + 1 << "º valor inteiro: ";
        cin >> arrayB[i];

        mergedArray[i + SIZE] = arrayB[i];

    }

    // Chamada da função
    sortArrayDescending(mergedArray);

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

    // Exibição do vetor C ordenado
    cout << "\n\nVetor C - Ordenação Decrescente de A e B" << endl;

    for (i = 0; i < SIZE * 2; i++) {
        cout << "[" << mergedArray[i] << "] ";
    }

    cout << endl;

    // Executado com sucesso
    return 0;
}

// Função para realizar a ordenação do vetor mesclado
void sortArrayDescending(int mergedArray[]) {

    // Loop para selecionar o elemento atual
    for (int i = 0; i < SIZE * 2; i++) {

        // Loop para comparar o elemento atual com os demais
        for (int j = i + 1; j < SIZE * 2; j++) {

            // Lógica condicional para ordenação
            if (mergedArray[i] < mergedArray[j]) {

                int tempValue = mergedArray[i];
                mergedArray[i] = mergedArray[j];
                mergedArray[j] = tempValue;

            }
        }
    }
}

/*
    Faça um programa possuindo uma função que receba dois vetores A e B de dez
    elementos inteiros como parâmetro. A função deverá determinar e mostrar um
    vetor C que contenha os elementos de A e B em ordem decrescente. O vetor C
    deverá ser mostrado no programa principal.
*/
