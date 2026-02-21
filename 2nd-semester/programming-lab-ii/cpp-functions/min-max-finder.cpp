// Bibliotecas
#include <iostream>
#include <locale.h>

// Constante
#define SIZE 5

// Importação de ferramentas
using namespace std;

// Protótipo da função
void findMinMax(int numbers[SIZE], int &minValue, int &maxValue);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int numbers[SIZE], i, minValue, maxValue;

    // Título
    cout << "LOCALIZADOR DE MENOR E MAIOR VALOR INTEIRO\n" << endl;

    cout << "Preenchendo o Vetor de Números - Tamanho " << SIZE << endl << endl;

    // Loop para entrada de dados
    for (i = 0; i < SIZE; i++) {

        cout << "Digite o " << i + 1 << "º valor: ";
        cin >> numbers[i];

    }

    // Chamada da função
    findMinMax(numbers, minValue, maxValue);

    // Exibição dos resultados
    cout << "\nO menor valor encontrado foi: " << minValue << endl;
    cout << "O maior valor encontrado foi: " << maxValue << endl;

    // Executado com sucesso
    return 0;
}

// Função que encontra o menor e o maior valor
void findMinMax(int numbers[SIZE], int &minValue, int &maxValue) {

    // Loop para varrer o vetor
    for (int i = 0; i < SIZE; i++) {

        // Lógica condicional para encontrar os extremos
        if (i == 0) {

            minValue = numbers[i];
            maxValue = numbers[i];

        } else {

            if (numbers[i] < minValue) {
                minValue = numbers[i];
            }

            if (numbers[i] > maxValue) {
                maxValue = numbers[i];
            }
        }
    }
}

/*
    Faça um programa contendo uma função que receba por passagem de parâmetro
    cinco valores inteiros e que determina o maior e o menor entre eles. O maior
    e o menor valor devem ser apresentados na função principal do programa.
*/
