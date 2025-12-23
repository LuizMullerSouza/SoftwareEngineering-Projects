// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
int sumDivisibleInterval(int divisor, int start, int finish);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int divisor, start, finish, result;

    // Título
    cout << "GERENCIADOR DE NÚMEROS DIVISÍVEIS\n" << endl;

    // Validação
    do {
        cout << "Digite um valor inteiro para A: ";
        cin >> divisor;

        if (divisor <= 1) {
            cout << "O valor de A deve ser maior que 1. Tente novamente.\n" << endl;
        }
    } while (divisor <= 1);

    // Entradas
    cout << "Digite um valor inteiro para B: ";
    cin >> start;

    cout << "Digite um valor inteiro para C: ";
    cin >> finish;

    // Lógica de troca
    if (start > finish) {
        int temp = finish;
        finish = start;
        start = temp;
    }

    // Chamada da função
    result = sumDivisibleInterval(divisor, start, finish);

    // Exibição do resultado
    cout << "\nSOMA TOTAL: " << result << endl;

    // Executado com sucesso
    return 0;
}

// Função que soma o intervalo de números válidos
int sumDivisibleInterval(int divisor, int start, int finish) {

    // Variável local
    int sum = 0;

    cout << "\nSOMANDO OS NÚMEROS EXISTENTES ENTRE " << start << " E " << finish << " E DIVISÍVEIS POR " << divisor << endl;

    // Loop para soma
    while (start <= finish) {
        if (start % divisor == 0) {
            sum += start;
            cout << start << "..." << endl;
        }
        start++;
    }

    // Retorna a soma
    return sum;
}

/*
    Faça um programa contendo uma função que receba 3 números inteiros a, b e c, sendo a maior que 1.
    A função deverá somar todos os inteiros entre b e c que sejam divisíveis por a (inclusive b e c) e
    retornar o resultado para a função principal.
*/
