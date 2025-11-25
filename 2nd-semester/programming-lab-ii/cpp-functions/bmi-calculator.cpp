// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void calculateBMI(float weight, float height);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float weightInput, heightInput;

    // Título
    cout << "CALCULADORA DE IMC\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe seu peso (kg): ";
    cin >> weightInput;

    cout << "Informe sua altura (m): ";
    cin >> heightInput;

    // Chamada da função
    calculateBMI(weightInput, heightInput);

    // Executado com sucesso
    return 0;
}

// Função que calcula e exibe o IMC
void calculateBMI(float weight, float height) {

    // Variável local
    float bmi;

    // Cálculo
    bmi = weight / (height * height);

    // Resultado
    cout << "\nIMC = " << fixed << setprecision(2) << bmi << endl;
}

/*
    Faça um programa contendo uma função para calcular e mostrar o índice
    de massa corporal (IMC). O IMC é calculado pela seguinte fórmula:
    IMC = Peso (Kg) / Altura (m)^2 O peso e a altura deverão ser lidos na
    função principal e fornecidos para a função por parâmetros.
*/
