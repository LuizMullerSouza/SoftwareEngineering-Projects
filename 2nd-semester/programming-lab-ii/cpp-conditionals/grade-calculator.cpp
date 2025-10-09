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
    float nota;

    cout << "CALCULADOR DE DESEMPENHO\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe sua nota: ";
    cin >> nota;

    // Condi��o para verificar o desempenho
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
    Fa�a um programa para ler um valor real representando a nota de um aluno e,
    em seguida, classificar com os conceitos Bom, Regular ou Ruim. Por exemplo:
    de 8,0 � 10,0 - Bom : de 5,0 � 7,9 - Regular : de 0,0 � 4,9 - Ruim.
*/
