// Bibliotecas
#include <iostream>
#include <cstdio>
#include <cstring>
#include <locale.h>

// Constante
#define tam 51

// Importação de ferramentas
using namespace std;

// Struct para leitura de dados do(s) município(s)
struct info {

    char nome[tam];
    char estado[tam];
    int populacao;

};

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    info municipio[90];
    int i, cad, maior, flag = 0;

    cout << "REGISTRADOR DE MUNICÍPIOS\n";

    // Laço para garantir a leitura correta da quantidade de municípios
    do {
        cout << endl << "Informe quantos municípios serão cadastrados (<=90): ";
        cin >> cad;
        if(cad < 1 || cad > 90) {
            cout << "Erro: para cadastro serão permitidos apenas valores positivos e <=90! Tente novamente.\n";
        }
    } while (cad < 1 || cad > 90);

    cout << endl << "CADASTRO DO(S) MUNICÍPIO(S)\n";

    // Laço para cadastramento do(s) município(s)
    for (i = 0; i < cad; i++) {
        cout << endl << "Cadastro do " << i+1 << "° Município\n";

        // Laço para garantir a leitura correta do nome do município
        do {
            cout << "Informe o nome do Município (máx 50 caracteres): ";
            fflush(stdin);
            gets(municipio[i].nome);
            if (strlen(municipio[i].nome) > 50) {
                cout << "Erro: o nome do Município deve conter no máximo 50 caracteres! Tente novamente.\n" << endl;
            }
        } while (strlen(municipio[i].nome) > 50);

        // Passagem para maiúsculo
        strupr(municipio[i].nome);

        // Laço para garantir a leitura correta do estado do município
        do {
            cout << "Informe o Estado do Município (máx 50 caracteres): ";
            fflush(stdin);
            gets(municipio[i].estado);
            if (strlen(municipio[i].estado) > 50) {
                cout << "Erro: o Estado do Município deve conter no máximo 50 caracteres! Tente novamente.\n" << endl;
            }
        } while (strlen(municipio[i].estado) > 50);

        // Passagem para maiúsculo
        strupr(municipio[i].estado);

        // Verificação lógica do estado
        if(strcmp(municipio[i].estado, "GOIAS") == 0 || strcmp(municipio[i].estado, "GOIÁS") == 0) {
            flag = 1;
        }

        // Leitura da população
        cout << "Informe o número da População: ";
        cin >> municipio[i].populacao;

        // Condição para a maior população
        if (i == 0) {
            maior = municipio[i].populacao;
        } else {
            if (municipio[i].populacao > maior) {
                maior = municipio[i].populacao;
            }
        }
    }

    cout << endl << "RESULTADOS OBTIDOS\n";

    // O atribuidor lógico sendo verdadeiro, exibição do resultado
    if (flag == 1) {
        cout << endl << "Municípios cadastrados no Estado de Goiás\n";

        for (i = 0; i < cad; i++) {
            if(strcmp(municipio[i].estado, "GOIAS") == 0 || strcmp(municipio[i].estado, "GOIÁS") == 0) {
                cout << endl << "Município " << i+1 << endl <<
                        "Nome: " << municipio[i].nome << endl <<
                        "Estado: " << municipio[i].estado << endl <<
                        "População: " << municipio[i].populacao << endl;
            }
        }
    }

    // Exibição do resultado de maior população
    for (i = 0; i < cad; i++) {
        if (maior == municipio[i].populacao) {
            cout << endl << "Município com maior população\n" << endl <<
                    "Município " << i+1 << endl <<
                    "Nome: " << municipio[i].nome << endl <<
                    "Estado: " << municipio[i].estado << endl <<
                    "População: " << municipio[i].populacao << endl;

        }
    }

    cout << "\nFim dos Resultados :)\n" << endl;

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para cadastrar o nome do município, seu estado e sua população. Mostrar todos os
    municípios cadastrados do estado de Goiás e os dados do município que contém a maior população.
    Cadastrar até 90 municípios.
*/
