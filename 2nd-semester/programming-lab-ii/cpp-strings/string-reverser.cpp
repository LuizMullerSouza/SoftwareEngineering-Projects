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
    char phrase[51];

    // T�tulo
    cout << "INVERSOR DE STRINGS" << endl;

    // Entrada e leitura de dados
    cout << "\nDigite sua string (m�x 50 caracteres): ";
    gets(phrase);

    // Resultado
    cout << "Frase invertida: ";

    // Loop para invers�o da string
    for (int i = strlen(phrase) - 1; i >= 0; i--) {
        cout << phrase[i];
    }

    cout << endl;

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para ler uma string do teclado e
    exibi-la invertida. Por exemplo:
    Entrada: MARIA BONITA
    Sa�da: ATINOB AIRAM
*/
