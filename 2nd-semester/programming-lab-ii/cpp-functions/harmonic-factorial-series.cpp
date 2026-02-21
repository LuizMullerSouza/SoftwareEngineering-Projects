// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
float calculateHarmonicFactorialSeries(int n);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int targetN;
    float finalSum;

    // Título
    cout << "CALCULADOR DE SÉRIE HARMÔNICA FATORIAL\n" << endl;

    cout << "CÁLCULO: S = 1 + 1 / 1! + 1 / 2! + 1 / 3! + ... + 1 / N!" << endl;

    // Leitura do valor N com validação
    do {

        cout << "\nInforme um valor inteiro positivo para N: ";
        cin >> targetN;

        if (targetN < 1) {
            cout << "Erro: o valor de N deve ser >= 1. Tente novamente." << endl;
        }

    } while (targetN < 1);

    // Chamada da função
    finalSum = calculateHarmonicFactorialSeries(targetN);

    // Exibição do resultado
    cout << "\nS = " << fixed << setprecision(2) << finalSum << endl;

    // Executado com sucesso
    return 0;
}

// Função para calcular a série harmônica fatorial
float calculateHarmonicFactorialSeries(int n) {

    // Variáveis locais
    float totalSum = 1.0;
    int currentFactorial = 1;

    // Loop para calcular os termos da série
    for (int i = 1; i <= n; i++) {

        currentFactorial *= i;
        totalSum += 1.0 / currentFactorial;
    }

    // Retorno da soma total
    return totalSum;
}

/*
    Construa um programa contendo uma função que receba como parâmetro um
    valor inteiro e positivo N e retorne o valor de S, obtido pelo seguinte
    cálculo: S = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
*/
