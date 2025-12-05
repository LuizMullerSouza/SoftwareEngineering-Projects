// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void checkPalindrome(int number);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variável
    int number;

    // Título
    cout << "VERIFICADOR DE NÚMEROS CAPICUAS\n" << endl;

    // Entrada e leitura de dados
    do {
        cout << "Informe um número inteiro de 2 dígitos: ";
        cin >> number;

        if (number < 10 || number > 99) {
            cout << "Erro: o número informado não é de 2 dígitos. Tente novamente.\n" << endl;
        }

    } while (number < 10 || number > 99);

    // Chamada da função
    checkPalindrome(number);

    // Executado com sucesso
    return 0;
}

// Função que verifica e mostra se o número é capicua
void checkPalindrome(int number) {

    // Variáveis locais
    int tens, units;

    // Cálculo
    tens = number / 10;
    units = number % 10;

    // Lógica condicional para resultado
    if (tens == units) {
        cout << endl << number << " É capicua." << endl;
    } else {
        cout << endl << number << " NÃO é capicua." << endl;
    }
}

/*
    Capicuas são números que têm o mesmo valor, se lido da esquerda
    para direita ou da direita para a esquerda. Ex.: 44, 22, 66, etc.
    Faça um programa contendo uma função que recebe por parâmetro um
    número inteiro de dois dígitos e que verifica e mostra se o número
    é capicua ou não.
*/
