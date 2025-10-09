// Bibliotecas
#include <iostream>
#include <locale.h>

// Importa��o de ferramentas
using namespace std;

// Fun��o Principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int horas, minutos, segundos, total;

    cout << "CALCULADORA DE SEGUNDOS\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe quantas horas se passaram desde o in�cio do dia: ";
    cin >> horas;
    cout << "Informe quantos minutos se passaram desde " << horas << " horas: ";
    cin >> minutos;
    cout << "Informe quantos segundos se passaram desde " << horas << ":" << minutos << ": ";
    cin >> segundos;

    // C�lculo
    total = horas * 3600 + minutos * 60 + segundos;

    // Resultado
    cout << "\nDesde o in�cio do dia, se passaram " << total << " segundos." << endl;

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para ler um valor representando horas, um valor representado
    minutos e um valor representando segundos e, em seguida, calcular e mostrar quantos segundos
    se passaram desde o in�cio do dia.
*/
