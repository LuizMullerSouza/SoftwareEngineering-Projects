// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
int squareValue(int number);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int number;

    // Título
    cout << "MULTIPLICADOR COM PASSAGEM DE PARÂMETRO POR VALOR\n" << endl;

    // Entrada e leitura de dados
    cout << "Digite um valor inteiro: ";
    cin >> number;

    // Resultado
    cout << "\nValor retornado pela função: " << squareValue(number) << endl;
    cout << "Valor mantido na main:       " << number << endl;

    return 0;
}

// Função que recebe por valor, multiplica e retorna
int squareValue(int number) {

    number = number * number;

    // Retorna o resultado
    return number;
}

/*
    Faça um programa que demonstre a passagem de
    parâmetro por valor e explique seu funcionamento.
*/
