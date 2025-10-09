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
    float salario, vendas, s_final;

    cout << "CALCULADOR DE SALÁRIOS\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe o valor do salário fixo: R$";
    cin >> salario;
    cout << "Informe o valor total de vendas: R$";
    cin >> vendas;

    // Cálculo
    s_final = vendas * 0.05 + salario;

    // Resultado
    cout << "\nValor do salário reajustado: R$" << fixed << setprecision(2) << s_final << endl;

    // Executado com sucesso
    return 0;
}

/*
    Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês
    e mais 5% do valor total das vendas por ele efetuadas. Faça um programa que leia o salário fixo
    do funcionário e o valor total de suas vendas. Calcule e mostre o salário final do vendedor.
*/
