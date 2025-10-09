// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importa��o de ferramentas
using namespace std;


// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    float deposito, d_reajuste;

    cout << "POUPAN�A DE 6%\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe o valor do dep�sito banc�rio: R$";
    cin >> deposito;

    // C�lculo
    d_reajuste = deposito * 1.06;

    // Resultado
    cout << "\nValor reajustado para o primeiro m�s: R$" << fixed << setprecision(2) << d_reajuste << endl;

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para ler um valor real representando um dep�sito banc�rio em uma poupan�a e, em seguida,
    calcular e mostrar o valor corrigido ap�s o primeiro m�s com uma taxa de juros de 6% ao m�s.
*/
