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
    float vet[10], media = 0;
    int i, quant_menor = 0, quant_maior = 0;

    cout << "CALCULADOR DE M�DIA, MENORES E MAIORES N�MEROS\n" << endl;

    // La�o para entrada e leitura dos 10 valores
    for(i = 0; i < 10; i++) {
        cout << "Informe o " << i+1 << "� valor: ";
        cin >> vet[i];

        // Somador para m�dia
        media += vet[i];
    }

    // C�lculo da m�dia
    media /= 10;

    // La�o verificador
    for(i = 0; i < 10; i++) {
        if (vet[i] < media) {
            quant_menor++;
        } else {
            quant_maior++;
        }
    }

    // Resultado
    cout << "\nM�DIA: " << fixed << setprecision(2) << media << endl;
    cout << "QUANTIDADE DE N�MEROS MENORES QUE A M�DIA: " << quant_menor << endl;
    cout << "QUANTIDADE DE N�MEROS MAIORES OU IGUAIS QUE A M�DIA: " << quant_maior << endl;

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para ler um vetor de 10 n�meros reais, calcular e mostrar a m�dia dos
    n�meros do vetor e, em seguida, calcular e mostrar a quantidade de n�meros menores que
    a m�dia e a quantidade de n�meros maiores ou iguais � m�dia.
*/
