// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Struct para guardar informações do aluno
struct info {

    int matricula;
    float nota[3];
    float media;
};

// Função principal
int main () {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    info aluno;

    cout << "CALCULADOR DE MÉDIA\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe seu número de matrícula: ";
    cin >> aluno.matricula;

    // Acumulador de média zerado
    aluno.media = 0;

    // Laço para entrada e leitura de dados
    for(int i = 0; i < 3; i++) {
        cout << "Informe sua " << i+1 << "° nota: ";
        cin >> aluno.nota[i];
        aluno.media += aluno.nota[i];
    }

    // Resultado
    cout << "\nMatrícula: " << aluno.matricula << endl;
    cout << "Média: " << fixed << setprecision(2) << aluno.media / 3 << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia 3 notas reais de um aluno e no final exiba
    sua matrícula e sua média.
*/
