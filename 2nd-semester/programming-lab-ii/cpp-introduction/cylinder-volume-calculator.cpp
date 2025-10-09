// Bibliotecas
#include <iostream>
#include <locale.h>

// Constante
#define PI 3.14159

// Importa��o de ferramentas
using namespace std;

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float raio, altura, volume;

    cout << "CALCULADOR DE VOLUME DE LATA DE �LEO\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe o valor do raio da lata: ";
    cin >> raio;
    cout << "Informe o valor da altura da lata: ";
    cin >> altura;

    // C�lculo
    volume = raio * raio * PI * altura;

    // Resultado
    cout << "\nO volume da lata de �leo �: " << volume << " unidades c�bicas." << endl;

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que leia o raio e a altura de uma lata de �leo e calcule e apresente
    o seu volume, utilizando a seguinte f�rmula: VOLUME = 3.14159 * RAIO2 * ALTURA.
*/
