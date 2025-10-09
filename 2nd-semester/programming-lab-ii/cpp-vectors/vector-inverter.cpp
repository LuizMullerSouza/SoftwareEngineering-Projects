// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int vet[10];
    int i;

    cout << "INVERSOR DE VETORES\n" << endl;

    // Laço para entrada e leitura dos valores no vetor já invertido
    for(i = 9; i >= 0; i--) {
        cout << "Informe o " << 10-i << "° valor: ";
        cin >> vet[i];
    }

    cout << "\nVETOR INVERTIDO\n" << endl;

    // Laço para exibir o resultado
    for(i = 0; i< 10; i++) {
        cout << i+1 << "° valor: " << vet[i] << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler um vetor de 10 números inteiros e, em seguida,
    inverter a ordem dos números no vetor e mostrá-los no final.
*/
