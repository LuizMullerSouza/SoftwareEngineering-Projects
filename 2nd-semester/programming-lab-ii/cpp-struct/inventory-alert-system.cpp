// Bibliotecas
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <locale.h>

// Constante
#define tam 71

// Importação de ferramentas
using namespace std;

// Struct para leitura de dados do(s) produto(s)
struct info {

    int codigo;
    char descricao[tam];
    int e_minimo;
    int e_atual;
    float preco;

};

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    info produto[20];
    int i, cad, flag = 0;

    cout << "GERENCIADOR DE ESTOQUES\n";

    // Laço para garantir a leitura correta da quantidade de produtos
    do {
        cout << endl << "Informe quantos produtos serão cadastrados (<=20): ";
        cin >> cad;
        if (cad < 1 || cad > 20) {
            cout << "Erro: a quantidade de produtos deve ser positiva e <=20! Tente novamente.\n";
        }

    } while (cad < 1 || cad > 20);

    cout << endl << "CADASTRO DO(S) PRODUTO(S)\n";

    // Laço para cadastramento do(s) produto(s)
    for(i = 0; i < cad; i++) {
        cout << endl << "Cadastro do " << i+1 << "° Produto\n";

        // Entrada e leitura do código do produto
        cout << "Informe o código: ";
        cin >> produto[i].codigo;

        // Laço para garantir a leitura correta da descrição do produto
        do {
            cout << "Informe a descrição (máx 70 caracteres): ";
            fflush(stdin);
            gets(produto[i].descricao);
            if (strlen(produto[i].descricao) > 70) {
                cout << "Erro: a descrição deve conter no máximo 70 caracteres! Tente novamente.\n";
            }

        } while (strlen(produto[i].descricao) > 70);

        // Entrada e leitura do estoque mínimo
        cout << "Informe o estoque mínimo: ";
        cin >> produto[i].e_minimo;

        // Entrada e leitura do estoque atual
        cout << "Informe o estoque atual: ";
        cin >> produto[i].e_atual;

        // Entrada e leitura do preço do produto
        cout << "Informe o preço: R$";
        cin >> produto[i].preco;
    }

    cout << "\nCÁLCULO DE ESTOQUE\n";

    // Exibição do resultado
    for(i = 0; i < cad; i++) {
        if(produto[i].e_atual < produto[i].e_minimo) {
            cout << endl << "Produto " << produto[i].codigo << " necessita de reposição!" << endl <<
                    "Descrição: " << produto[i].descricao << endl <<
                    "Estoque Mínimo: " << produto[i].e_minimo << endl <<
                    "Estoque Atual: " << produto[i].e_atual << endl <<
                    "Preço: " << fixed << setprecision(2) << produto[i].preco << endl <<
                    "Sugestão de compra : " << produto[i].e_minimo - produto[i].e_atual << " unidades" << endl;
            // Atribuidor lógico
            flag = 1;
        }
    }

    // Verificação lógica
    if(flag == 1) {
        cout << "\nFim da Listagem!\n" << endl;
    } else {
        cout << "\nQue maravilha :)\nNenhum produto necessita de reposição!\n" << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para cadastrar até 20 produtos de uma loja com os seguintes dados: código, descrição, estoque
    mínimo, estoque atual e preço. Mostrar todos os dados dos produtos que contenham o estoque atual menor que o
    estoque mínimo para efetuar compra.
*/
