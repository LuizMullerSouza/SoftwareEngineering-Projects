// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Função 1
void function1() {

    // Variável local, existe apenas dentro da função 1
    int value = 100;

    cout << "\nO valor presente na função 1 é " << value << endl;
}

// Função 2
void function2() {

    // Variável local, existe apenas dentro da função 2
    int value = 200;

    cout << "\nO valor presente na função 2 é " << value << endl;
}

// Função 3
void function3() {

    // Variável local, existe apenas dentro da função 3
    int value = 300;

    cout << "\nO valor presente na função 3 é " << value << endl;
}

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int mainValue;

    // Título
    cout << "FUNCIONAMENTO DE ESCOPO DE VARIÁVEIS" << endl;

    // Entrada e leitura de dados
    cout << "\nInforme um valor inteiro qualquer: ";
    cin >> mainValue;

    // Exibe o valor da main
    cout << "\nValor inserido: " << mainValue;

    // Chamada da função 1
    function1();

    // Exibe o valor dobrado da main
    cout << "Valor dobrado: " << mainValue * 2;

    // Chamada da função 2
    function2();

    // Exibe o valor triplicado da main
    cout << "Valor triplicado: " << mainValue * 3;

    // Chamada da função 3
    function3();

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que demonstre o funcionamento do escopo
    de variáveis, declarando variáveis com o mesmo nome em
    funções diferentes e mostrando que elas não interferem
    umas nas outras.
*/
