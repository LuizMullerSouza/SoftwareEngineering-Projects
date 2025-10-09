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
    float salario, vendas, s_final;

    cout << "CALCULADOR DE SAL�RIOS\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe o valor do sal�rio fixo: R$";
    cin >> salario;
    cout << "Informe o valor total de vendas: R$";
    cin >> vendas;

    // C�lculo
    s_final = vendas * 0.05 + salario;

    // Resultado
    cout << "\nValor do sal�rio reajustado: R$" << fixed << setprecision(2) << s_final << endl;

    // Executado com sucesso
    return 0;
}

/*
    Uma revendedora de carros usados paga a seus funcion�rios vendedores um sal�rio fixo por m�s
    e mais 5% do valor total das vendas por ele efetuadas. Fa�a um programa que leia o sal�rio fixo
    do funcion�rio e o valor total de suas vendas. Calcule e mostre o sal�rio final do vendedor.
*/
