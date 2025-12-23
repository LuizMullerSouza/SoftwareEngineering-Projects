// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
float convertFahrenheitToCelsius(float fahrenheit);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float fahrenheit, celsius;

    // Título
    cout << "CONVERSOR DE GRAUS FAHRENHEIT PARA CELSIUS\n" << endl;

    // Entrada e leitura de dados
    cout << "Digite uma temperatura em graus Fahrenheit: ";
    cin >> fahrenheit;

    // Chamada da função
    celsius = convertFahrenheitToCelsius(fahrenheit);

    // Exibição do resultado
    cout << endl << fahrenheit << " °F = " << fixed << setprecision(2) << celsius << " °C" << endl;

    // Executado com sucesso
    return 0;
}

// Função para converter a temperatura
float convertFahrenheitToCelsius(float fahrenheit) {

    // Variável local
    float result;

    // Cálculo
    result = (fahrenheit - 32) * 5 / 9;

    // Retorna o resultado
    return result;
}

/*
    Faça um programa contendo uma função que receba uma temperatura em
    Fahrenheit, calcule a conversão para Celsius e retorne o valor calculado
    para a função principal, onde será exibido.
*/
