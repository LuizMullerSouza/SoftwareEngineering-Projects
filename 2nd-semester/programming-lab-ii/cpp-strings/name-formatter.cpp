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
    int i;
    char fullName[81];

    // Título
    cout << "CAPITALIZADOR DE NOMES\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe seu nome completo: ";
    gets(fullName);

    // Lógica condicional e cálculo
    if (strlen(fullName) <= 0) {
        cout << "\nErro: nome vazio." << endl;
    } else {
        // Capturando o primeiro caractere da string inteira
        fullName[0] = toupper(fullName[0]);

        // Loop para formatar o restante da string
        for (i = 1; i < strlen(fullName); i++) {

            if (fullName[i - 1] == ' ') {
                fullName[i] = toupper(fullName[i]);
            } else {
                fullName[i] = tolower(fullName[i]);
            }
        }

        // Resultado
        cout << "\nSeu nome formatado: " << fullName << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa que leia o nome completo de uma pessoa
    em uma string. A seguir, o programa deverá converter as letras
    iniciais de cada palavra para maiúsculo e o restante para minúsculo.
    O nome modificado deverá ser apresentado na tela no final do programa.
    Exemplo:
    Entrada: LUIZ MULLER sales de SOUZA
    Saída: Luiz Muller Sales De Souza
*/
