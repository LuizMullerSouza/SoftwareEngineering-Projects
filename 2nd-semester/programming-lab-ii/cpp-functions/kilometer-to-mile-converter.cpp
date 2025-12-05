// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void convertKilometersToMiles(int kilometers);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variável
    int kilometers;

    // Título
    cout << "CONVERSOR DE QUILÔMETROS PARA MILHAS\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe um valor inteiro em quilômetros: ";
    cin >> kilometers;

    // Chamada da função
    convertKilometersToMiles(kilometers);

    // Executado com sucesso
    return 0;
}

// Função que converte quilômetros para milhas e exibe o resultado
void convertKilometersToMiles(int kilometers) {

    // Variável local
    float miles;

    // Cálculo
    miles = kilometers * 0.62;

    // Resultado
    cout << endl << kilometers << " KM = " << fixed << setprecision(2) << miles << " milhas" << endl;
}

/*
    Faça um programa que contenha uma função, onde passado por parâmetro um valor inteiro representando
    uma distância em quilômetros, realiza a conversão para milhas e mostra na tela o resultado. Observação:
    1 quilômetro equivale a aproximadamente 0,62 milhas.
*/
