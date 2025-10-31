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
    char phrase[51];

    // Título
    cout << "INVERSOR DE STRINGS" << endl;

    // Entrada e leitura de dados
    cout << "\nDigite sua string (máx 50 caracteres): ";
    gets(phrase);

    // Resultado
    cout << "Frase invertida: ";

    // Loop para inversão da string
    for (int i = strlen(phrase) - 1; i >= 0; i--) {
        cout << phrase[i];
    }

    cout << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler uma string do teclado e
    exibi-la invertida. Por exemplo:
    Entrada: MARIA BONITA
    Saída: ATINOB AIRAM
*/
