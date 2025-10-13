// Bibliotecas
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <locale.h>

// Constante
#define tam 51

// Importação de ferramentas
using namespace std;

// Struct para leitura de dados dos voos
struct info {

    int codigo;
    int hora;
    int minuto;
    int passageiros;
    float valor;
    char origem[tam];
    char destino[tam];

};

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    info voo[10];
    char user_origem[tam];
    int i, flag = 0;

    cout << "GERENCIAMENTO DE VOOS\n";

    // Cadastramento dos voos
    for(i= 0; i < 10; i++) {

        // Entrada e leitura do código de voo
        cout << endl << "Registrar " << i+1 << "° Voo\n" << "Código do Voo: ";
        cin >> voo[i].codigo;

        // Laço para garantir a leitura correta das horas do voo
        do {
            cout << "Horas do Voo: ";
            cin >> voo[i].hora;
            if(voo[i].hora < 0 || voo[i].hora > 23) {
                cout<< "Erro: o horário deve ser entre 0 e 23! Tente novamente.\n" << endl;
            }
        } while (voo[i].hora < 0 || voo[i].hora > 23);

        // Laço para garantir a leitura correta dos minutos do voo
        do {
            cout << "Minutos do Voo: ";
            cin >> voo[i].minuto;
            if(voo[i].minuto < 0 || voo[i].minuto > 59) {
                cout<< "Erro: os minutos devem ser entre 0 e 59! Tente novamente.\n" << endl;
            }
        } while (voo[i].minuto < 0 || voo[i].minuto > 59);

        // Entrada e leitura do número de passageiros
        cout << "Número de Passageiros: ";
        cin >> voo[i].passageiros;

        // Entrada e leitura do valor da passagem
        cout << "Valor da Passagem: R$";
        cin >> voo[i].valor;

        // Laço para garantir a leitura correta da origem do voo
        do {
            cout << "Origem (máx 50 caracteres): ";
            fflush(stdin);
            gets(voo[i].origem);
            if (strlen(voo[i].origem) > 50) {
                cout << "Erro: o local de origem deve conter no máximo 50 caracteres! Tente novamente.\n" << endl;
            }
        } while (strlen(voo[i].origem) > 50);

        // Passagem para maiúsculo
        strupr(voo[i].origem);

        // Laço para garantir a leitura correta do destino do voo
        do {
            cout << "Destino (máx 50 caracteres): ";
            fflush(stdin);
            gets(voo[i].destino);
            if (strlen(voo[i].destino) > 50) {
                cout << "Erro: o local de destino deve conter no máximo 50 caracteres! Tente novamente.\n" << endl;
            }
        } while (strlen(voo[i].destino) > 50);

        // Passagem para maiúsculo
        strupr(voo[i].destino);
    }

    cout << endl << "PESQUISADOR DE VOOS\n" << endl;

    // Leitura da origem atual para pesquisa
    do {
        cout << "Informe a origem (máx 50 caracteres): ";
        fflush(stdin);
        gets(user_origem);
        if (strlen(user_origem) > 50) {
            cout << "Erro: o local de origem deve conter no máximo 50 caracteres! Tente novamente.\n" << endl;
        }
    } while (strlen(user_origem) > 50);

    // Passagem para maiúsculo
    strupr(user_origem);

    // Laço para encontrar voo disponível
    for(i = 0; i < 10; i++) {

        // Existindo tal voo, o resultado é exibido
        if(strcmp(voo[i].origem, user_origem) == 0) {
            cout << endl << "Voo " << i+1 << " encontrado!" << endl <<
                    "Código: " << voo[i].codigo << endl <<
                    "Horário: ";

                    // Formatação de horário
                    if(voo[i].hora < 10) {
                        cout << "0";
                    }
                    cout << voo[i].hora << ":";

                    if(voo[i].minuto < 10) {
                        cout << "0";
                    }
                    cout << voo[i].minuto;
                    cout << endl << "Número de Passageiros: " << voo[i].passageiros << endl <<
                    "Valor: R$" << fixed << setprecision(2) << voo[i].valor << endl <<
                    "Origem: " << voo[i].origem << endl <<
                    "Destino: " << voo[i].destino << endl <<
                    "\n----------------------" << endl;

            // Atribuidor lógico
            flag = 1;
        }
    }

    // Verificação lógica
    if(flag == 1) {
        cout << "\nFim da Listagem de Voos Disponíveis\n" << endl;
    } else {
        cout << "\nPoxa, que pena! Não temos nenhum voo disponível para sua origem :(\n" << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para cadastrar o horário de partida dos 10 voos diários de uma certa companhia,
    com os dados: código, horário de partida, quantidade de passageiros, valor da passagem, origem e
    destino. Solicitar ao usuário a origem e mostrar todos os dados dos voos que possuem esta origem.
*/
