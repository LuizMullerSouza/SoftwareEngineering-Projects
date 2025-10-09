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
    int flag = 0;
    float peso, maior;

    cout << "CALCULADOR DE MAIOR PESO\n" << endl;

    // Laço para entrada e leitura dos pesos
    do {
        cout << "Informe um peso (kg): ";
        cin >> peso;

        // Condição para o primeiro peso ser o maior automaticamente
        if (flag == 0) {
            maior = peso;
            flag = 1;
        } else {

            // Condição para comparar os pesos
            if (peso > maior && peso != 0) {
                maior = peso;
            }
        }
    } while (peso != 0);

    // Resultado
    cout << "\nO maior peso digitado foi: " << fixed << setprecision(2) << maior << "kg." << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler o peso de várias pessoas e calcular e mostrar no final o maior peso.
    O programa deverá encerrar quando for informado um peso igual zero.
*/
