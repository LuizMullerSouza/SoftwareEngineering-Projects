// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
int sumInterval(int number1, int number2);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number1, number2, totalSum;

    // Título
    cout << "SOMADOR DE INTERVALO ENTRE DOIS NÚMEROS\n" << endl;

    // Entrada e leitura de dados
    cout << "Digite o primeiro número inteiro: ";
    cin >> number1;

    do {
        cout << "Digite o segundo número inteiro: ";
        cin >> number2;

        if (number2 == number1){
            cout << "Para uma melhor experiência, o segundo número deve ser diferente do primeiro. Tente novamente.\n" << endl;
        }
    } while (number2 == number1);

    // Lógica de troca
    if (number1 > number2) {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }

    // Chamada da função
    totalSum = sumInterval(number1, number2);

    // Exibição dos resultados
    if (totalSum == 0) {
        cout << "\nNão existem números inteiros entre os valores informados." << endl;
    } else {
        cout << "\nSOMA TOTAL: " << totalSum << endl;
    }

    // Executado com sucesso
    return 0;
}

// Função que soma o intervalo de números
int sumInterval(int number1, int number2) {

    // Variável local
    int sum = 0;

    cout << "\nSOMANDO OS NÚMEROS EXISTENTES ENTRE " << number1 << " E " << number2 << endl;

    // Loop para soma
    for (int i = number1 + 1; i < number2; i++) {
        cout << i << "..." << endl;
        sum += i;
    }

    // Retorna a soma
    return sum;
}

/*
    Faça um programa contendo uma função que receba dois números positivos
    por parâmetro e retorne a soma dos n números inteiros existentes entre eles.
*/
