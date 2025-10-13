// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importa��o de ferramentas
using namespace std;

// Struct para guardar informa��es do aluno
struct info {

    int matricula;
    float nota[3];
    float media;
};

// Fun��o principal
int main () {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    info aluno;

    cout << "CALCULADOR DE M�DIA\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe seu n�mero de matr�cula: ";
    cin >> aluno.matricula;

    // Acumulador de m�dia zerado
    aluno.media = 0;

    // La�o para entrada e leitura de dados
    for(int i = 0; i < 3; i++) {
        cout << "Informe sua " << i+1 << "� nota: ";
        cin >> aluno.nota[i];
        aluno.media += aluno.nota[i];
    }

    // Resultado
    cout << "\nMatr�cula: " << aluno.matricula << endl;
    cout << "M�dia: " << fixed << setprecision(2) << aluno.media / 3 << endl;

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que leia 3 notas reais de um aluno e no final exiba
    sua matr�cula e sua m�dia.
*/
