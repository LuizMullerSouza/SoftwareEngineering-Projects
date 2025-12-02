// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void findMinimumValue(int number1, int number2, int number3);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number1, number2, number3;

    // Título
    cout << "LOCALIZADOR DE MENOR NÚMERO\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe o primeiro número inteiro: ";
    cin >> number1;

    cout << "Informe o segundo número inteiro: ";
    cin >> number2;

    cout << "Informe o terceiro número inteiro: ";
    cin >> number3;

    // Chamada da função
    findMinimumValue(number1, number2, number3);

    // Executado com sucesso
    return 0;
}

// Função para encontrar e mostrar o menor valor
void findMinimumValue(int number1, int number2, int number3) {

    // Variável local
    int minimum = number1;

    // Lógica de comparação
    if (number2 < minimum) {
        minimum = number2;
    }

    if (number3 < minimum) {
        minimum = number3;
    }

    // Resultado
    cout << "\nO menor número digitado foi: " << minimum << endl;
}

/*
    Faça um programa contendo uma função para receber, por parâmetro,
    três valores inteiros informados no módulo principal. A função
    deverá então determinar e mostrar o menor valor dos três valores
    informados.
*/
