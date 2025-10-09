// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int n, p_impar = 1, s_par = 0, i;

    cout << "PRODUTO DOS ÍMPARES E SOMA DOS PARES\n" << endl;

    // Laço para entrada e leitura dos 10 números
    for (i = 1; i <= 10; i++) {

        cout << "Informe o " << i << "° número: ";
        cin >> n;

        // Condição para verificar paridade
        if (n % 2 == 0) {
            s_par += n;
        } else {
            p_impar *= n;
        }
    }

    // Condição para exibir o resultado ímpar
     if (p_impar != 1) {
         cout << "\nProduto dos números ímpares: " << p_impar;
     } else {
         cout << "\nProduto dos números ímpares: nenhum número ímpar foi digitado.";
     }

     // Condição para exibir o resultado par
     if (s_par != 0) {
         cout << "\nSoma dos números pares: " << s_par << endl;
     } else {
         cout << "\nSoma dos números pares: nenhum número par foi digitado." << endl;
     }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler 10 números inteiros aleatórios e calcular e mostrar o
    produto dos números ímpares e a soma dos números pares.
*/
