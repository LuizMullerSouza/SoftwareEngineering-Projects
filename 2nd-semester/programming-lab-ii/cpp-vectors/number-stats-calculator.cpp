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
    float vet[10], media = 0;
    int i, quant_menor = 0, quant_maior = 0;

    cout << "CALCULADOR DE MÉDIA, MENORES E MAIORES NÚMEROS\n" << endl;

    // Laço para entrada e leitura dos 10 valores
    for(i = 0; i < 10; i++) {
        cout << "Informe o " << i+1 << "° valor: ";
        cin >> vet[i];

        // Somador para média
        media += vet[i];
    }

    // Cálculo da média
    media /= 10;

    // Laço verificador
    for(i = 0; i < 10; i++) {
        if (vet[i] < media) {
            quant_menor++;
        } else {
            quant_maior++;
        }
    }

    // Resultado
    cout << "\nMÉDIA: " << fixed << setprecision(2) << media << endl;
    cout << "QUANTIDADE DE NÚMEROS MENORES QUE A MÉDIA: " << quant_menor << endl;
    cout << "QUANTIDADE DE NÚMEROS MAIORES OU IGUAIS QUE A MÉDIA: " << quant_maior << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler um vetor de 10 números reais, calcular e mostrar a média dos
    números do vetor e, em seguida, calcular e mostrar a quantidade de números menores que
    a média e a quantidade de números maiores ou iguais à média.
*/
