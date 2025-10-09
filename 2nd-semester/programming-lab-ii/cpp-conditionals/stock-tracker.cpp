// Bibliotecas
#include <iostream>
#include <locale.h>

// Importa��o de ferramentas
using namespace std;

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int q_atual, q_minima, q_maxima, q_media;

    cout << "GERENCIADOR DE ESTOQUE\n" << endl;

    // Entrada e leitura de dados
    cout << "Quantidade atual em estoque: ";
    cin >> q_atual;
    cout << "Quantidade m�nima que o estoque deve ter: ";
    cin >> q_minima;
    cout << "Quantidade m�xima que o estoque deve ter: ";
    cin >> q_maxima;

    // C�lculo da m�dia de quantidade
    q_media = (q_maxima + q_minima) / 2;

    // Condi��o para verificar compra
    if (q_atual >= q_media) {
        cout << "\nN�o efetuar compra." << endl;
    } else {
        cout << "\nEfetuar compra." << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para ler a quantidade atual em estoque, a quantidade m�xima em estoque
    e a quantidade m�nima em estoque de um produto. O programa dever� calcular e mostrar a
    quantidade m�dia ((quantidade m�dia = quantidade m�xima + quantidade m�nima)/2). Se a
    quantidade em estoque for maior ou igual a quantidade m�dia, o programa dever� escrever
    tamb�m a mensagem �N�o efetuar compra�, caso contr�rio, dever� escrever a mensagem �Efetuar compra�.
*/
