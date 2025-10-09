// Bibliotecas
#include <iostream>
#include <locale.h>

// Constante
#define PI 3.14159

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float raio, altura, volume;

    cout << "CALCULADOR DE VOLUME DE LATA DE ÓLEO\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe o valor do raio da lata: ";
    cin >> raio;
    cout << "Informe o valor da altura da lata: ";
    cin >> altura;

    // Cálculo
    volume = raio * raio * PI * altura;

    // Resultado
    cout << "\nO volume da lata de óleo é: " << volume << " unidades cúbicas." << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia o raio e a altura de uma lata de óleo e calcule e apresente
    o seu volume, utilizando a seguinte fórmula: VOLUME = 3.14159 * RAIO2 * ALTURA.
*/
