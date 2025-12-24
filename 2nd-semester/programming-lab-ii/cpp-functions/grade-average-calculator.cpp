// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipos das funções
float calculateArithmeticAverage(float grade1, float grade2, float grade3);
float calculateWeightedAverage(float grade1, float grade2, float grade3);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float grade1, grade2, grade3, resultAverage;
    char option;

    // Título
    cout << "CALCULADOR DE MÉDIAS POR OPÇÃO\n" << endl;

    // Entrada de dados
    cout << "Digite a primeira nota: ";
    cin >> grade1;

    cout << "Digite a segunda nota: ";
    cin >> grade2;

    cout << "Digite a terceira nota: ";
    cin >> grade3;

    // Menu
    cout << "\n=== Menu de Opções === " << endl
         << "A - Calcular a Média Aritmética" << endl
         << "P - Calcular a Média Ponderada" << endl;

    // Validação da opção
    do {
        cout << "\nDigite a opção desejada: ";
        cin >> option;

        if(toupper(option) != 'A' && toupper(option) != 'P'){
            cout << "A opção informada é inválida. Tente novamente." << endl;
        }
    } while(toupper(option) != 'A' && toupper(option) != 'P');

    // Lógica para chamada da função
    if(toupper(option) == 'A'){
        resultAverage = calculateArithmeticAverage(grade1, grade2, grade3);
    } else {
        resultAverage = calculateWeightedAverage(grade1, grade2, grade3);
    }

    // Exibição do resultado
    cout << "Resultado = " << fixed << setprecision(2) << resultAverage << endl;

    // Executado com sucesso
    return 0;
}

// Função para calcular a Média Aritmética
float calculateArithmeticAverage(float grade1, float grade2, float grade3){

    // Variável local
    float average;

    cout << "\n=== Calcular Média Aritmética ===\n" << endl;
    cout << "Calculando... " << "(" << grade1 << " + " << grade2 << " + " << grade3 << ")" << " / 3\n" << endl;

    // Cálculo
    average = (grade1 + grade2 + grade3) / 3;

    // Retorno da média
    return average;
}

// Função para calcular a Média Ponderada
float calculateWeightedAverage(float grade1, float grade2, float grade3){

    // Variável local
    float average;

    cout << "\n=== Calcular Média Ponderada ===\n" << endl;
    cout << "Calculando... " << "(" << grade1 << " x 5 + " << grade2 << " x 3 + " << grade3 << " x 2)" << " / 10\n" << endl;

    // Cálculo
    average = (grade1 * 5 + grade2 * 3 + grade3 * 2) / 10;

    // Retorno da média
    return average;
}

/*
    Elabore um programa contendo uma função que receba as três notas de um aluno
    como parâmetros e uma letra. Se a letra for A, a função deverá calcular a média
    aritmética das notas do aluno; se for P, deverá calcular a média ponderada, com
    pesos 5, 3 e 2. A média calculada deverá ser devolvida ao programa principal para,
    então, ser mostrada.
*/
