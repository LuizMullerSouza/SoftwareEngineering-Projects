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
    int i;
    float n1, n2, n3, media_aluno, media_turma = 0;

    cout << "CALCULADOR DE M�DIAS\n" << endl;

    // La�o para entrada e leitura das 3 notas dos 10 alunos
    for(i = 1; i <= 10; i++) {
        cout << i << "� ALUNO\n" << endl;

        cout << "Informe a primeira nota: ";
        cin >> n1;

        cout << "Informe a segunda nota: ";
        cin >> n2;

        cout << "Informe a terceira nota: ";
        cin >> n3;

        // C�lculo da m�dia do aluno
        media_aluno = (n1 + n2 + n3) / 3;

        // Somador da m�dia da turma
        media_turma += media_aluno;

        // Exibi��o da m�dia do aluno
        cout << "\nM�dia do " << i << "� aluno: " << fixed << setprecision(2) << media_aluno << endl << endl;
    }

    // C�lculo da m�dia da turma
    media_turma /= 10;

    // Exibi��o da m�dia da turma
    cout << "M�dia da turma: " << fixed << setprecision(2) << media_turma << endl;

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para ler as notas (n1, n2, n3) de cada aluno de uma turma de 10 alunos e, em seguida,
    calcular e mostrar a media de cada aluno. No final deve ser mostrada tamb�m a m�dia da turma.
*/
