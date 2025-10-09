// Bibliotecas
#include <iostream>
#include <locale.h>

// Importa��o de ferramentas
using namespace std;

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int vet[10];
    int i;

    cout << "INVERSOR DE VETORES\n" << endl;

    // La�o para entrada e leitura dos valores no vetor j� invertido
    for(i = 9; i >= 0; i--) {
        cout << "Informe o " << 10-i << "� valor: ";
        cin >> vet[i];
    }

    cout << "\nVETOR INVERTIDO\n" << endl;

    // La�o para exibir o resultado
    for(i = 0; i< 10; i++) {
        cout << i+1 << "� valor: " << vet[i] << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para ler um vetor de 10 n�meros inteiros e, em seguida,
    inverter a ordem dos n�meros no vetor e mostr�-los no final.
*/
