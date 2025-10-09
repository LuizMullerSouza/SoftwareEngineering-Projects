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
    float nota;

    cout << "CALCULADOR DE DESEMPENHO\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe sua nota: ";
    cin >> nota;

    // Condição para verificar o desempenho
    if (nota < 5) {
        cout << "\nDesempenho RUIM." << endl;
    } else {
        if (nota < 8) {
            cout << "\nDesempenho REGULAR." << endl;
        } else {
            cout << "\nDesempenho BOM." << endl;
        }
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler um valor real representando a nota de um aluno e,
    em seguida, classificar com os conceitos Bom, Regular ou Ruim. Por exemplo:
    de 8,0 à 10,0 - Bom : de 5,0 à 7,9 - Regular : de 0,0 à 4,9 - Ruim.
*/
