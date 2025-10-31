// Bibliotecas
#include <iostream>
#include <cstring>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    char searchChar, phrase[51];
    int count = 0;

    // Título
    cout << "CONTADOR DE CARACTERES EM UMA FRASE" << endl;

    // Entrada e leitura de dados
    cout << "\nDigite uma string (máx 50 caracteres): ";
    gets(phrase);

    // Conversão
    strupr(phrase);

    cout << "Informe um caractere para contar na string: ";
    cin >> searchChar;

    // Limpeza do buffer
    fflush(stdin);

    // Conversão
    searchChar = toupper(searchChar);

    // Loop para cálculo
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
    Faça um programa para ler uma frase e determinar quantas vezes um determinado
    caractere aparece na frase. Esse caractere deve ser informado pelo usuário.
*/
