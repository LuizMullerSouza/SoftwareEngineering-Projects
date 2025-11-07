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

    // Título
    cout << "CONTADOR DE VOGAIS\n" << endl;

    // Variáveis
    char currentChar, phrase[105];
    int j, length, vowelA = 0, vowelE = 0, vowelI = 0, vowelO = 0, vowelU = 0;

    // Entrada e leitura de dados
    do {
        cout << "Digite uma frase (máx. 100 caracteres): ";
        gets(phrase);
        length = strlen(phrase);

        if (length > 100) {
            cout << "A frase tem mais de 100 caracteres! Digite novamente\n" << endl;
        }
    } while (length > 100);

    // Loop de contagem
    for (j = 0; j < length; j++) {

        // Conversão para maiúsculo
        currentChar = tolower(phrase[j]);

        // Verificação de vogal
        switch(currentChar) {
            case 'a':
                vowelA++;
                break;
            case 'e':
                vowelE++;
                break;
            case 'i':
                vowelI++;
                break;
            case 'o':
                vowelO++;
                break;
            case 'u':
                vowelU++;
                break;
        }
    }

    // Resultado
    cout << "\nNúmero de vogais encontradas:" << endl;
    cout << "A = " << vowelA << endl;
    cout << "E = " << vowelE << endl;
    cout << "I = " << vowelI << endl;
    cout << "O = " << vowelO << endl;
    cout << "U = " << vowelU << endl;

    // Executado com sucesso
    return 0;
}

/*
    Fazer um programa para ler uma frase (string) de no
    máximo 100 caracteres e contar o número de vezes
    em que cada vogal (a, e, i, o, u) aparece na frase.
    Exemplo:
    String: “Nesta prova vou tirar dez”.
    Número de vogais: a = 3, e = 2, i = 1, o = 2, u = 1.
*/
