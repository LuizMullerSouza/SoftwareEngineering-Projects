// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Função para somar um número real e um número inteiro
void calculateSum(float floatNum, int intNum) {

    // Variável local
    float result;

    // Cálculo
    result = floatNum + intNum;

    // Resultado
    cout << endl << floatNum << " + " << intNum << " = " << result << endl;
}

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int integerInput;
    float floatInput;

    // Título
    cout << "SOMADOR DE NÚMEROS" << endl;

    // Entrada e leitura de dados
    cout << "\nInforme um valor inteiro para A: ";
    cin >> integerInput;

    cout << "Informe um valor real para B: ";
    cin >> floatInput;

    // Chamada da função
    calculateSum(floatInput, integerInput);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia um número inteiro e um número real,
    calcule e mostre a soma dos dois números utilizando uma função
    que recebe esses valores como parâmetros.
*/
