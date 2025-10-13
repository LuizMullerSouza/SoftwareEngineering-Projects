// Bibliotecas
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <locale.h>

// Constante
#define tam 71

// Importa��o de ferramentas
using namespace std;

// Struct para leitura de dados do(s) produto(s)
struct info {

    int codigo;
    char descricao[tam];
    int e_minimo;
    int e_atual;
    float preco;

};

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    info produto[20];
    int i, cad, flag = 0;

    cout << "GERENCIADOR DE ESTOQUES\n";

    // La�o para garantir a leitura correta da quantidade de produtos
    do {
        cout << endl << "Informe quantos produtos ser�o cadastrados (<=20): ";
        cin >> cad;
        if (cad < 1 || cad > 20) {
            cout << "Erro: a quantidade de produtos deve ser positiva e <=20! Tente novamente.\n";
        }

    } while (cad < 1 || cad > 20);

    cout << endl << "CADASTRO DO(S) PRODUTO(S)\n";

    // La�o para cadastramento do(s) produto(s)
    for(i = 0; i < cad; i++) {
        cout << endl << "Cadastro do " << i+1 << "� Produto\n";

        // Entrada e leitura do c�digo do produto
        cout << "Informe o c�digo: ";
        cin >> produto[i].codigo;

        // La�o para garantir a leitura correta da descri��o do produto
        do {
            cout << "Informe a descri��o (m�x 70 caracteres): ";
            fflush(stdin);
            gets(produto[i].descricao);
            if (strlen(produto[i].descricao) > 70) {
                cout << "Erro: a descri��o deve conter no m�ximo 70 caracteres! Tente novamente.\n";
            }

        } while (strlen(produto[i].descricao) > 70);

        // Entrada e leitura do estoque m�nimo
        cout << "Informe o estoque m�nimo: ";
        cin >> produto[i].e_minimo;

        // Entrada e leitura do estoque atual
        cout << "Informe o estoque atual: ";
        cin >> produto[i].e_atual;

        // Entrada e leitura do pre�o do produto
        cout << "Informe o pre�o: R$";
        cin >> produto[i].preco;
    }

    cout << "\nC�LCULO DE ESTOQUE\n";

    // Exibi��o do resultado
    for(i = 0; i < cad; i++) {
        if(produto[i].e_atual < produto[i].e_minimo) {
            cout << endl << "Produto " << produto[i].codigo << " necessita de reposi��o!" << endl <<
                    "Descri��o: " << produto[i].descricao << endl <<
                    "Estoque M�nimo: " << produto[i].e_minimo << endl <<
                    "Estoque Atual: " << produto[i].e_atual << endl <<
                    "Pre�o: " << fixed << setprecision(2) << produto[i].preco << endl <<
                    "Sugest�o de compra : " << produto[i].e_minimo - produto[i].e_atual << " unidades" << endl;
            // Atribuidor l�gico
            flag = 1;
        }
    }

    // Verifica��o l�gica
    if(flag == 1) {
        cout << "\nFim da Listagem!\n" << endl;
    } else {
        cout << "\nQue maravilha :)\nNenhum produto necessita de reposi��o!\n" << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para cadastrar at� 20 produtos de uma loja com os seguintes dados: c�digo, descri��o, estoque
    m�nimo, estoque atual e pre�o. Mostrar todos os dados dos produtos que contenham o estoque atual menor que o
    estoque m�nimo para efetuar compra.
*/
