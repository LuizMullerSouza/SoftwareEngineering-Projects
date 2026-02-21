// Bibliotecas
#include <iostream>
#include <locale.h>

// Constante
#define SIZE 5

// Importação de ferramentas
using namespace std;

// Protótipo da função
void sortArrayAscending(float numberArray[]);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variável
    float numberArray[SIZE];

    // Título
    cout << "ORDENADOR CRESCENTE DE VETORES\n" << endl;

    cout << "Preenchendo o Vetor Real - Tamanho " << SIZE << "\n" << endl;

    // Loop para entrada de dados do vetor
    for (int i = 0; i < SIZE; i++) {

        cout << "Digite o " << i + 1 << "º valor: ";
        cin >> numberArray[i];

    }

    // Chamada da função
    sortArrayAscending(numberArray);

    // Exibição do vetor ordenado
    cout << "\nVetor Ordenado Crescente - Tamanho " << SIZE << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "[" << numberArray[i] << "] ";
    }

    cout << endl;

    // Executado com sucesso
    return 0;
}

// Função para ordenar o vetor de forma crescente
void sortArrayAscending(float numberArray[]) {

    // Loop para selecionar o elemento atual
    for (int i = 0; i < SIZE; i++) {

        // Loop para comparar o elemento atual com os demais
        for (int j = i + 1; j < SIZE; j++) {

            // Lógica condicional para ordenação
            if (numberArray[i] > numberArray[j]) {

                float tempValue = numberArray[i];
                numberArray[i] = numberArray[j];
                numberArray[j] = tempValue;

            }
        }
    }
}

/*
    Faça um programa possuindo uma função que receba como parâmetro um
    vetor A com cinco números reais e retorne esses números ordenados
    de forma crescente.
*/
