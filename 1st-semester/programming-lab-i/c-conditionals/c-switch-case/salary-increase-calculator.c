// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int jobCode;
    float currentSalary, newSalary, difference;

    // Título
    printf("\nCALCULADORA DE REAJUSTE SALARIAL\n\n");

    // Exibição do Menu
    printf("=== CÓDIGOS DE CARGOS ===\n");
    printf("Gerente    - CÓD 101\n");
    printf("Engenheiro - CÓD 102\n");
    printf("Técnico    - CÓD 103\n");
    printf("Outros     - CÓD 104+\n\n");

    // Entrada de dados
    printf("Informe o CÓD do seu cargo: CÓD - ");
    scanf("%d", &jobCode);

    printf("Informe o seu salário atual: R$");
    scanf("%f", &currentSalary);

    // Estrutura de decisão para calcular o novo salário
    switch (jobCode) {
        case 101:
            // Gerente: 10%
            newSalary = currentSalary * 1.10;
            difference = newSalary - currentSalary;
            printf("\nSalário Antigo: R$%.2f\nNovo Salário:   R$%.2f\nDiferença:      R$%.2f\n\n", currentSalary, newSalary, difference);
        break;

        case 102:
            // Engenheiro: 20%
            newSalary = currentSalary * 1.20;
            difference = newSalary - currentSalary;
            printf("\nSalário Antigo: R$%.2f\nNovo Salário:   R$%.2f\nDiferença:      R$%.2f\n\n", currentSalary, newSalary, difference);
        break;

        case 103:
            // Técnico: 30%
            newSalary = currentSalary * 1.30;
            difference = newSalary - currentSalary;
            printf("\nSalário Antigo: R$%.2f\nNovo Salário:   R$%.2f\nDiferença:      R$%.2f\n\n", currentSalary, newSalary, difference);
        break;

        default:
            // Outros cargos: 40%
            newSalary = currentSalary * 1.40;
            difference = newSalary - currentSalary;
            printf("\nSalário Antigo: R$%.2f\nNovo Salário:   R$%.2f\nDiferença:      R$%.2f\n\n", currentSalary, newSalary, difference);
    }

    // Executado com sucesso
    return 0;
}

/*
    Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela abaixo.
    Faça um programa que leia o salário e o código do cargo de umfuncionário e calcule o novo salário. Se o cargo do funcionário
    não estiver na tabela, ele deverá, então, receber 40% de aumento. Mostre o salário antigo, o novo salário e a diferença.
                                                 Código - Cargo - Percentual
                                                    101 - Gerente - 10%
                                                    102 - Engenheiro - 20%
                                                    103 - Técnico - 30%
*/
