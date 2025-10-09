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
    int flag = 0;
    float peso, maior;

    cout << "CALCULADOR DE MAIOR PESO\n" << endl;

    // La�o para entrada e leitura dos pesos
    do {
        cout << "Informe um peso (kg): ";
        cin >> peso;

        // Condi��o para o primeiro peso ser o maior automaticamente
        if (flag == 0) {
            maior = peso;
            flag = 1;
        } else {

            // Condi��o para comparar os pesos
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
    Fa�a um programa para ler o peso de v�rias pessoas e calcular e mostrar no final o maior peso.
    O programa dever� encerrar quando for informado um peso igual zero.
*/
