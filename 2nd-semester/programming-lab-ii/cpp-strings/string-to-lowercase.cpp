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
    char phrase[31];

    // Título
    cout << "CONVERSOR DE MAIÚSCULO PARA MINÚSCULO" << endl;

    // Entrada e leitura de dados
    cout << "\nInforme uma frase em maiúsculo (máx 30 caracteres): ";
    gets(phrase);

    // Conversão e resultado
    cout << "\nFrase em minúsculo: " << strlwr(phrase) << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler uma frase em maiúsculo
    e apresentá-la novamente em minúsculo.
*/
