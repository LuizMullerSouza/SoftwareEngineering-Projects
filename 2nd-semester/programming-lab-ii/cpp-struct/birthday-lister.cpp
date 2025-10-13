// Bibliotecas
#include <iostream>
#include <cstdio>
#include <cstring>
#include <locale.h>

// Constante
#define tam 51

// Importação de ferramentas
using namespace std;

// Struct para leitura de dados das 40 pessoas
struct info {

    char nome[tam];
    int dia;
    int mes;

};

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    info pessoa[40];
    int i, aux, flag;

    cout << "GERENCIADOR DE ANIVERSÁRIOS\n";

    // Laço para cadastramento dos aniversários
    for (i = 0; i < 40; i++) {

        cout << "\nCadastro do " << i+1 << "° Aniversário\n";

        // Laço para garantir a leitura correta do nome do aniversariante
        do {

            cout << "Informe o nome da pessoa (máx 50 caracteres): ";
            fflush(stdin);
            gets(pessoa[i].nome);
            if(strlen(pessoa[i].nome) > 50) {
                cout << "Erro: o nome informado deve conter no máximos 50 caracteres! Tente novamente.\n" << endl;
            }

        } while (strlen(pessoa[i].nome) > 50);

        // Laço para garantir a leitura correta do dia do aniversário
        do {

            cout << "Informe o dia do aniversário: ";
            cin >> pessoa[i].dia;
            if(pessoa[i].dia < 1 || pessoa[i].dia > 31) {
                cout << "Erro: o dia informado deve ser positivo e <=31! Tente novamente.\n" << endl;
            }

        } while (pessoa[i].dia < 1 || pessoa[i].dia > 31);

        // Laço para garantir a leitura correta do mês do aniversário
        do {

            cout << "Informe o mês do aniversário: ";
            cin >> pessoa[i].mes;
            if(pessoa[i].mes < 1 || pessoa[i].mes > 12) {
                cout << "Erro: o mês informado deve ser positivo e <=12! Tente novamente.\n" << endl;
            }

        } while (pessoa[i].mes < 1 || pessoa[i].mes > 12);

    }

    cout << "\nRESULTADO DOS ANIVERSÁRIOS CADASTRADOS\n";

    // Laço para exibir resultado
    for (aux = 1; aux <= 12; aux++) {
        cout << "---------------------";
        cout << endl << "Mês " << aux << endl;
        flag = 0;

        for (i = 0; i < 40; i++) {

            // Exibindo dados do aniversariante encontrado
            if(pessoa[i].mes == aux) {

                cout << endl << strupr(pessoa[i].nome) << " faz aniversário no mês " << aux << endl;

                // Formatação de escrita
                if (pessoa[i].dia < 10) {
                    cout << "Dia: 0" << pessoa[i].dia << "/";
                } else {
                    cout << "Dia: " << pessoa[i].dia << "/";
                }

                if (pessoa[i].mes < 10) {
                    cout << "0" << pessoa[i].mes << endl;
                } else {
                    cout << pessoa[i].mes << endl;
                }

                // Atribuidor lógico
                flag = 1;
            }

        }

        // Verificação lógica
        if (flag == 0) {
            cout << "Poxa, que pena! Ninguém fez aniversário no mês " << aux << " :(" << endl;
        }
    }

    // Fim do programa
    cout << "\nFIM DA LISTAGEM\n" << endl;

    // Executado com sucesso
    return 0;
}

/*
    Dados os seguintes campos de um registro: nome, dia de aniversário e mês de aniversário, faça
    um programa que mostre em cada um dos meses do ano quem são as pessoas que fazem aniversário,
    exibir também o dia. Considere um conjunto de 40 pessoas.
*/
