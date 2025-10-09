// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int q_atual, q_minima, q_maxima, q_media;

    cout << "GERENCIADOR DE ESTOQUE\n" << endl;

    // Entrada e leitura de dados
    cout << "Quantidade atual em estoque: ";
    cin >> q_atual;
    cout << "Quantidade mínima que o estoque deve ter: ";
    cin >> q_minima;
    cout << "Quantidade máxima que o estoque deve ter: ";
    cin >> q_maxima;

    // Cálculo da média de quantidade
    q_media = (q_maxima + q_minima) / 2;

    // Condição para verificar compra
    if (q_atual >= q_media) {
        cout << "\nNão efetuar compra." << endl;
    } else {
        cout << "\nEfetuar compra." << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler a quantidade atual em estoque, a quantidade máxima em estoque
    e a quantidade mínima em estoque de um produto. O programa deverá calcular e mostrar a
    quantidade média ((quantidade média = quantidade máxima + quantidade mínima)/2). Se a
    quantidade em estoque for maior ou igual a quantidade média, o programa deverá escrever
    também a mensagem “Não efetuar compra”, caso contrário, deverá escrever a mensagem “Efetuar compra”.
*/
