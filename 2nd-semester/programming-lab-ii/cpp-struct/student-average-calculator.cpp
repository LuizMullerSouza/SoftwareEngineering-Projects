// Bibliotecas
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <locale.h>

// Constante
#define tam 100

// Importa��o de ferramentas
using namespace std;

// Struct para guardar informa��es dos alunos
struct info {

    int matricula;
    float nota[3];
    float media;
    char nome[tam];

};

// Fun��o principal
int main () {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    info aluno[tam];
    int i, j, cad;

    cout << "REGISTRADOR DE ALUNOS\n" << endl;

    // La�o para leitura da quantidade de alunos
    do {

        cout << "Informe a quantidade de alunos que ser�o cadastrados (<=100): ";
        cin >> cad;

        if (cad < 1 || cad > 100) {
            cout << "Erro: o valor informado deve ser positivo e <= 100!\n" << endl;
        }

    } while (cad < 1 || cad > 100);

    // La�o para entrada e leitura de dados
    for(i = 0; i < cad; i++) {

        cout << endl << "CADASTRO DO " << i+1 << "� ALUNO\n" << endl;

        cout << "Informe o n�mero de matr�cula do aluno: ";
        cin >> aluno[i].matricula;

        aluno[i].media = 0;

        // La�o para entrada e leitura das notas
        for (j = 0; j < 3; j++) {
            cout << "Informe a " << j+1 << "� nota do aluno: ";
            cin >> aluno[i].nota[j];
            aluno[i].media += aluno[i].nota[j];
        }

        // C�lculo da m�dia
        aluno[i].media /= 3;

        cout << "Informe o nome do aluno (m�x 99 caracteres): ";
        fflush(stdin);
        gets(aluno[i].nome);

    }

    cout << endl << "RESULTADO DOS ALUNOS CADASTRADOS\n";

    // La�o para exibi��o do resultado
    for(i = 0; i < cad; i++) {

        cout << endl << "REGISTRO - ALUNO " << i+1 << endl << endl;

        cout << "Nome do aluno: " << aluno[i].nome << endl;
        cout << "N�mero de matr�cula: " << aluno[i].matricula << endl;

        // La�o para exibi��o das notas
        for (j = 0; j < 3; j++) {
            cout << j+1 << "� Nota: " << fixed << setprecision(2) << aluno[i].nota[j] << endl;
        }
        cout << "M�dia das notas: " << fixed << setprecision(2) << aluno[i].media << endl;

    }

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa que leia a matr�cula, o nome e as 3 notas de uma lista de alunos (m�ximo de 100 alunos),
    no final, exiba sua matr�cula e sua m�dia.
*/
