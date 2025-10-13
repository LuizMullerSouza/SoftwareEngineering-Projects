// Bibliotecas
#include <iostream>
#include <cstdio>
#include <cstring>
#include <locale.h>

// Constante
#define tam 51

// Importa��o de ferramentas
using namespace std;

// Struct para leitura de dados do(s) munic�pio(s)
struct info {

    char nome[tam];
    char estado[tam];
    int populacao;

};

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    info municipio[90];
    int i, cad, maior, flag = 0;

    cout << "REGISTRADOR DE MUNIC�PIOS\n";

    // La�o para garantir a leitura correta da quantidade de munic�pios
    do {
        cout << endl << "Informe quantos munic�pios ser�o cadastrados (<=90): ";
        cin >> cad;
        if(cad < 1 || cad > 90) {
            cout << "Erro: para cadastro ser�o permitidos apenas valores positivos e <=90! Tente novamente.\n";
        }
    } while (cad < 1 || cad > 90);

    cout << endl << "CADASTRO DO(S) MUNIC�PIO(S)\n";

    // La�o para cadastramento do(s) munic�pio(s)
    for (i = 0; i < cad; i++) {
        cout << endl << "Cadastro do " << i+1 << "� Munic�pio\n";

        // La�o para garantir a leitura correta do nome do munic�pio
        do {
            cout << "Informe o nome do Munic�pio (m�x 50 caracteres): ";
            fflush(stdin);
            gets(municipio[i].nome);
            if (strlen(municipio[i].nome) > 50) {
                cout << "Erro: o nome do Munic�pio deve conter no m�ximo 50 caracteres! Tente novamente.\n" << endl;
            }
        } while (strlen(municipio[i].nome) > 50);

        // Passagem para mai�sculo
        strupr(municipio[i].nome);

        // La�o para garantir a leitura correta do estado do munic�pio
        do {
            cout << "Informe o Estado do Munic�pio (m�x 50 caracteres): ";
            fflush(stdin);
            gets(municipio[i].estado);
            if (strlen(municipio[i].estado) > 50) {
                cout << "Erro: o Estado do Munic�pio deve conter no m�ximo 50 caracteres! Tente novamente.\n" << endl;
            }
        } while (strlen(municipio[i].estado) > 50);

        // Passagem para mai�sculo
        strupr(municipio[i].estado);

        // Verifica��o l�gica do estado
        if(strcmp(municipio[i].estado, "GOIAS") == 0 || strcmp(municipio[i].estado, "GOI�S") == 0) {
            flag = 1;
        }

        // Leitura da popula��o
        cout << "Informe o n�mero da Popula��o: ";
        cin >> municipio[i].populacao;

        // Condi��o para a maior popula��o
        if (i == 0) {
            maior = municipio[i].populacao;
        } else {
            if (municipio[i].populacao > maior) {
                maior = municipio[i].populacao;
            }
        }
    }

    cout << endl << "RESULTADOS OBTIDOS\n";

    // O atribuidor l�gico sendo verdadeiro, exibi��o do resultado
    if (flag == 1) {
        cout << endl << "Munic�pios cadastrados no Estado de Goi�s\n";

        for (i = 0; i < cad; i++) {
            if(strcmp(municipio[i].estado, "GOIAS") == 0 || strcmp(municipio[i].estado, "GOI�S") == 0) {
                cout << endl << "Munic�pio " << i+1 << endl <<
                        "Nome: " << municipio[i].nome << endl <<
                        "Estado: " << municipio[i].estado << endl <<
                        "Popula��o: " << municipio[i].populacao << endl;
            }
        }
    }

    // Exibi��o do resultado de maior popula��o
    for (i = 0; i < cad; i++) {
        if (maior == municipio[i].populacao) {
            cout << endl << "Munic�pio com maior popula��o\n" << endl <<
                    "Munic�pio " << i+1 << endl <<
                    "Nome: " << municipio[i].nome << endl <<
                    "Estado: " << municipio[i].estado << endl <<
                    "Popula��o: " << municipio[i].populacao << endl;

        }
    }

    cout << "\nFim dos Resultados :)\n" << endl;

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para cadastrar o nome do munic�pio, seu estado e sua popula��o. Mostrar todos os
    munic�pios cadastrados do estado de Goi�s e os dados do munic�pio que cont�m a maior popula��o.
    Cadastrar at� 90 munic�pios.
*/
