// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Função para conversão de temperaturas
void convertFahrenheitToCelsius(float fahrenheit) {

    // Variável local
    float celsius;

    // Cálculo
    celsius = (fahrenheit - 32) * (5.0 / 9.0);

    cout << "\nCelsius = " << celsius << "°C" << endl;
}

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float fahrenheitInput;

    // Título
    cout << "CONVERSOR DE FAHRENHEIT PARA CELSIUS" << endl;

    // Entrada e leitura de dados
    cout << "\nDigite a temperatura em graus Fahrenheit: ";
    cin >> fahrenheitInput;

    // Chamada da função
    convertFahrenheitToCelsius(fahrenheitInput);

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia uma temperatura em Fahrenheit e
    a converta para Celsius utilizando uma função que realiza
    o cálculo e exibe o resultado. Fórmula: C = (F - 32) * 5/9
*/
