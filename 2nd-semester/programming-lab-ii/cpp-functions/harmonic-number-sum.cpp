// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void calculateHarmonicSeries(int n);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variável
    int n;

    // Título
    cout << "CALCULADOR DE N-ÉSIMO NÚMERO HARMÔNICO" << endl
         << "CÁLCULO: S = 1/1 + 1/2 + 1/3 + ... + 1/n" << endl;

    // Entrada e leitura de dados
    do {
        cout << "\nInforme um valor inteiro e positivo para N: ";
        cin >> n;

        if (n < 1) {
            cout << "Erro: o valor de N deve ser positivo maior que zero." << endl;
        }

    } while (n < 1);

    // Chamada da função
    calculateHarmonicSeries(n);

    // Executado com sucesso
    return 0;
}

// Função para calcular e mostrar a série harmônica
void calculateHarmonicSeries(int n) {

    // Variável local
    float sum = 0;

    // Cálculo
    for(int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    // Resultado
    cout << "\nS = " << fixed << setprecision(4) << sum << endl;
}

/*
    Faça um programa contendo uma função para receber, por parâmetro,
    um valor inteiro e positivo n e calcular e mostrar o valor de S,
    obtido pelo seguinte cálculo: S = 1/1 + 1/2 + 1/3 + ... + 1/n
*/
