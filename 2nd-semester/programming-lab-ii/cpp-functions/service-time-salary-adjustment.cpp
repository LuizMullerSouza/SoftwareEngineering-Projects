// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void adjustSalaryByTenure(float salary, int serviceYears);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float salary;
    int serviceYears;

    // Título
    cout << "AJUSTADOR DE SALÁRIO POR TEMPO DE SERVIÇO\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe seu salário: R$";
    cin >> salary;

    cout << "Informe seu tempo de serviço em anos: ";
    cin >> serviceYears;

    // Chamada da função
    adjustSalaryByTenure(salary, serviceYears);

    // Executado com sucesso
    return 0;
}

// Função que calcula e mostra o salário reajustado
void adjustSalaryByTenure(float salary, int serviceYears) {

    // Variável local
    float adjustedSalary;

    // Lógica condicional para cálculo
    if (serviceYears < 10) {
        adjustedSalary = salary * 1.10;
    } else {
        adjustedSalary = salary * 1.15;
    }

    // Resultado
    cout << "\nSalário reajustado: R$" << fixed << setprecision(2) << adjustedSalary << endl;
}

/*
    Faça um programa contendo uma função para receber por parâmetro o salário e o tempo
    de serviço de um funcionário e promover um reajuste salarial. A função deverá reajustar
    o salário de acordo com o tempo de serviço do funcionário. Se o funcionário possui
    tempo de serviço inferior a 10 anos, o reajuste será de 10%, caso contrário, o reajuste
    será de 15%. Ao final, a função deverá mostrar o salário reajustado.
*/
