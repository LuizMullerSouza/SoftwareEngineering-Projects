// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void calculateSalaryAdjustment(float salary, int jobCode);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float salary;
    int jobCode;

    // Título
    cout << "AJUSTADOR DE AUMENTO DE SALÁRIO SEGTOTAL" << endl << endl;

    // Entrada e leitura de dados com validação
    do {
        cout << "91 - Gerente | 92 - Analista | 93 - Técnico | 94 - Outro" << endl;
        cout << "Informe o código do seu cargo: ";
        cin >> jobCode;

        if (jobCode < 91 || jobCode > 94) {
            cout << "Erro: o código inserido não está no menu de opções. Tente novamente.\n" << endl;
        }

    } while (jobCode < 91 || jobCode > 94);

    cout << "\nInforme o valor do seu salário: R$";
    cin >> salary;

    // Chamada da função
    calculateSalaryAdjustment(salary, jobCode);

    // Executado com sucesso
    return 0;
}

// Função que calcula e mostra o salário reajustado
void calculateSalaryAdjustment(float salary, int jobCode) {

    // Variável local
    float adjustedSalary;

    // Lógica condicional para calcular o aumento
    switch (jobCode) {

        // Gerente
        case 91:
            adjustedSalary = salary * 1.10;
            break;

        // Analista
        case 92:
            adjustedSalary = salary * 1.20;
            break;

        // Técnico
        case 93:
            adjustedSalary = salary * 1.30;
            break;

        // Outro
        default:
            adjustedSalary = salary * 1.355;
    }

    // Resultado
    cout << "\nSalário Reajustado: R$" << fixed << setprecision(2) << adjustedSalary << endl;
}

/*
    A corretora Segtotal concederá um aumento de salário aos seus funcionários, variável
    de acordo com o cargo, conforme tabela abaixo. Para isso, faça um programa contendo
    uma função para receber, por parâmetro, o salário e o código do cargo de um funcionário,
    e calcular e mostrar o seu salário reajustado. Se o cargo do funcionário não estiver na
    tabela, ele deverá, então, receber 35,5% de aumento. Código 91: Gerente (10%) | Código
    92: Analista (20%) | Código 93: Técnico (30%) | Outros: 35,5%
*/
