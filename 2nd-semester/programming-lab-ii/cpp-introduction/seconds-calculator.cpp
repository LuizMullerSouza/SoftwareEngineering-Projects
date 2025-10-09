// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Função Principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int horas, minutos, segundos, total;

    cout << "CALCULADORA DE SEGUNDOS\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe quantas horas se passaram desde o início do dia: ";
    cin >> horas;
    cout << "Informe quantos minutos se passaram desde " << horas << " horas: ";
    cin >> minutos;
    cout << "Informe quantos segundos se passaram desde " << horas << ":" << minutos << ": ";
    cin >> segundos;

    // Cálculo
    total = horas * 3600 + minutos * 60 + segundos;

    // Resultado
    cout << "\nDesde o início do dia, se passaram " << total << " segundos." << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler um valor representando horas, um valor representado
    minutos e um valor representando segundos e, em seguida, calcular e mostrar quantos segundos
    se passaram desde o início do dia.
*/
