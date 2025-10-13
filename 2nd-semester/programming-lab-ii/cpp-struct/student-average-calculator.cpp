// Bibliotecas
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <locale.h>

// Constante
#define tam 100

// Importação de ferramentas
using namespace std;

// Struct para guardar informações dos alunos
struct info {

    int matricula;
    float nota[3];
    float media;
    char nome[tam];

};

// Função principal
int main () {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    info aluno[tam];
    int i, j, cad;

    cout << "REGISTRADOR DE ALUNOS\n" << endl;

    // Laço para leitura da quantidade de alunos
    do {

        cout << "Informe a quantidade de alunos que serão cadastrados (<=100): ";
        cin >> cad;

        if (cad < 1 || cad > 100) {
            cout << "Erro: o valor informado deve ser positivo e <= 100!\n" << endl;
        }

    } while (cad < 1 || cad > 100);

    // Laço para entrada e leitura de dados
    for(i = 0; i < cad; i++) {

        cout << endl << "CADASTRO DO " << i+1 << "° ALUNO\n" << endl;

        cout << "Informe o número de matrícula do aluno: ";
        cin >> aluno[i].matricula;

        aluno[i].media = 0;

        // Laço para entrada e leitura das notas
        for (j = 0; j < 3; j++) {
            cout << "Informe a " << j+1 << "° nota do aluno: ";
            cin >> aluno[i].nota[j];
            aluno[i].media += aluno[i].nota[j];
        }

        // Cálculo da média
        aluno[i].media /= 3;

        cout << "Informe o nome do aluno (máx 99 caracteres): ";
        fflush(stdin);
        gets(aluno[i].nome);

    }

    cout << endl << "RESULTADO DOS ALUNOS CADASTRADOS\n";

    // Laço para exibição do resultado
    for(i = 0; i < cad; i++) {

        cout << endl << "REGISTRO - ALUNO " << i+1 << endl << endl;

        cout << "Nome do aluno: " << aluno[i].nome << endl;
        cout << "Número de matrícula: " << aluno[i].matricula << endl;

        // Laço para exibição das notas
        for (j = 0; j < 3; j++) {
            cout << j+1 << "° Nota: " << fixed << setprecision(2) << aluno[i].nota[j] << endl;
        }
        cout << "Média das notas: " << fixed << setprecision(2) << aluno[i].media << endl;

    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia a matrícula, o nome e as 3 notas de uma lista de alunos (máximo de 100 alunos),
    no final, exiba sua matrícula e sua média.
*/
