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
    int anos;
    float salario, reajuste;

    cout << "CALCULADOR DE SALÁRIOS\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe a quantos anos você trabalha na empresa: ";
    cin >> anos;
    cout << "Informe o valor do seu salário: R$";
    cin >> salario;

    // Condição de para reajuste de salário
    if (anos < 10) {
        reajuste = salario * 1.08;
    } else {
        reajuste = salario * 1.1;
    }

    // Resultado
    cout << "\nSalário reajustado: R$" << fixed << setprecision(2) << reajuste << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler o tempo de serviço e o salário de um funcionário e, em seguida,
    calcular e mostrar um reajuste salarial de acordo com a seguinte situação: se o funcionário
    possui tempo de serviço inferior a 10 anos, o reajuste será de 8%, caso contrário, o reajuste
    salarial será de 10%.
*/
