// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importação de ferramentas
using namespace std;


// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float deposito, d_reajuste;

    cout << "POUPANÇA DE 6%\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe o valor do depósito bancário: R$";
    cin >> deposito;

    // Cálculo
    d_reajuste = deposito * 1.06;

    // Resultado
    cout << "\nValor reajustado para o primeiro mês: R$" << fixed << setprecision(2) << d_reajuste << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler um valor real representando um depósito bancário em uma poupança e, em seguida,
    calcular e mostrar o valor corrigido após o primeiro mês com uma taxa de juros de 6% ao mês.
*/
