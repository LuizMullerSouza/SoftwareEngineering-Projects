// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void calculateFactorial(int number);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variável
    int inputNumber;

    // Título
    cout << "CALCULADOR DE FATORIAL" << endl << endl;

    // Entrada e leitura de dados
    do {
        cout << "Informe um número inteiro positivo: ";
        cin >> inputNumber;

        if (inputNumber < 0) {
            cout << "Erro: não é possível calcular o fatorial de um número negativo. Tente novamente.\n" << endl;
        }

    } while (inputNumber < 0);

    // Chamada da função
    calculateFactorial(inputNumber);

    // Executado com sucesso
    return 0;
}

// Função que calcula e exibe o fatorial
void calculateFactorial(int number) {

    // Variável local
    int result = 1;

    // Cálculo
    for(int i = 1; i <= number; i++) {
        result *= i;
    }

    // Resultado
    cout << endl << number << "! = " << result << endl;
}

/*
    O fatorial de um número inteiro positivo n é definido como sendo
    o produto dos inteiros de 1 a n. O fatorial de zero é definido
    como 1. Faça um programa contendo uma função que receba um número
    inteiro como parâmetro e que calcula e mostra o seu fatorial.
*/
