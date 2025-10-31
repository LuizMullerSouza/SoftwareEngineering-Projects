// Bibliotecas
#include <iostream>
#include <cstring>
#include <locale.h>

// Importa��o de ferramentas
using namespace std;

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    char searchChar, phrase[51];
    int count = 0;

    // T�tulo
    cout << "CONTADOR DE CARACTERES EM UMA FRASE" << endl;

    // Entrada e leitura de dados
    cout << "\nDigite uma string (m�x 50 caracteres): ";
    gets(phrase);

    // Convers�o
    strupr(phrase);

    cout << "Informe um caractere para contar na string: ";
    cin >> searchChar;

    // Limpeza do buffer
    fflush(stdin);

    // Convers�o
    searchChar = toupper(searchChar);

    // Loop para c�lculo
    for (int i = 0; i < strlen(phrase); i++) {
        if (phrase[i] == searchChar) {
            count++;
        }
    }

    // Resultado
    cout << "\nCaractere escolhido: " << searchChar << endl
         << "Quantidade de vezes que apareceu na string: " << count << endl;

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para ler uma frase e determinar quantas vezes um determinado
    caractere aparece na frase. Esse caractere deve ser informado pelo usu�rio.
*/
