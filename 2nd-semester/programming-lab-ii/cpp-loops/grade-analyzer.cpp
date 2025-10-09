// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int i;
    float n1, n2, n3, media_aluno, media_turma = 0;

    cout << "CALCULADOR DE MÉDIAS\n" << endl;

    // Laço para entrada e leitura das 3 notas dos 10 alunos
    for(i = 1; i <= 10; i++) {
        cout << i << "° ALUNO\n" << endl;

        cout << "Informe a primeira nota: ";
        cin >> n1;

        cout << "Informe a segunda nota: ";
        cin >> n2;

        cout << "Informe a terceira nota: ";
        cin >> n3;

        // Cálculo da média do aluno
        media_aluno = (n1 + n2 + n3) / 3;

        // Somador da média da turma
        media_turma += media_aluno;

        // Exibição da média do aluno
        cout << "\nMédia do " << i << "° aluno: " << fixed << setprecision(2) << media_aluno << endl << endl;
    }

    // Cálculo da média da turma
    media_turma /= 10;

    // Exibição da média da turma
    cout << "Média da turma: " << fixed << setprecision(2) << media_turma << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler as notas (n1, n2, n3) de cada aluno de uma turma de 10 alunos e, em seguida,
    calcular e mostrar a media de cada aluno. No final deve ser mostrada também a média da turma.
*/
