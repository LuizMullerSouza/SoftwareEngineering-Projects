// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void calculateIntervalSum(int min, int max);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number1, number2;

    // Título
    cout << "SOMADOR DE NÚMEROS ENTRE UM INTERVALO\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe o primeiro número: ";
    cin >> number1;

    do {
        cout << "Informe o segundo número: ";
        cin >> number2;

        if (number1 == number2){
            cout << "Erro: o segundo número deve ser diferente do primeiro. Tente novamente.\n" << endl;
        }
    } while (number1 == number2);

    // Lógica condicional para troca
    if (number2 < number1) {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }

    // Chamada da função
    calculateIntervalSum(number1, number2);

    // Executado com sucesso
    return 0;
}

// Função que calcula e mostra a soma do intervalo entre os dois números
void calculateIntervalSum(int min, int max) {

    // Variável local
    int sum = 0;

    // Cálculo
    for (int i = min + 1; i < max; i++) {
        sum += i;
    }

    // Resultado
    cout << "\nA soma dos números existentes entre " << min << " e " << max << " é: " << sum << endl;
}

/*
    Faça um programa contendo uma função que recebe por parâmetro dois números inteiros, e que
    calcula e mostra na tela a soma de todos os números inteiros existentes entre eles.
*/
