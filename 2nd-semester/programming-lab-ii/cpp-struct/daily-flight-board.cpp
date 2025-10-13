// Bibliotecas
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <locale.h>

// Constante
#define tam 51

// Importa��o de ferramentas
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

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    info voo[10];
    char user_origem[tam];
    int i, flag = 0;

    cout << "GERENCIAMENTO DE VOOS\n";

    // Cadastramento dos voos
    for(i= 0; i < 10; i++) {

        // Entrada e leitura do c�digo de voo
        cout << endl << "Registrar " << i+1 << "� Voo\n" << "C�digo do Voo: ";
        cin >> voo[i].codigo;

        // La�o para garantir a leitura correta das horas do voo
        do {
            cout << "Horas do Voo: ";
            cin >> voo[i].hora;
            if(voo[i].hora < 0 || voo[i].hora > 23) {
                cout<< "Erro: o hor�rio deve ser entre 0 e 23! Tente novamente.\n" << endl;
            }
        } while (voo[i].hora < 0 || voo[i].hora > 23);

        // La�o para garantir a leitura correta dos minutos do voo
        do {
            cout << "Minutos do Voo: ";
            cin >> voo[i].minuto;
            if(voo[i].minuto < 0 || voo[i].minuto > 59) {
                cout<< "Erro: os minutos devem ser entre 0 e 59! Tente novamente.\n" << endl;
            }
        } while (voo[i].minuto < 0 || voo[i].minuto > 59);

        // Entrada e leitura do n�mero de passageiros
        cout << "N�mero de Passageiros: ";
        cin >> voo[i].passageiros;

        // Entrada e leitura do valor da passagem
        cout << "Valor da Passagem: R$";
        cin >> voo[i].valor;

        // La�o para garantir a leitura correta da origem do voo
        do {
            cout << "Origem (m�x 50 caracteres): ";
            fflush(stdin);
            gets(voo[i].origem);
            if (strlen(voo[i].origem) > 50) {
                cout << "Erro: o local de origem deve conter no m�ximo 50 caracteres! Tente novamente.\n" << endl;
            }
        } while (strlen(voo[i].origem) > 50);

        // Passagem para mai�sculo
        strupr(voo[i].origem);

        // La�o para garantir a leitura correta do destino do voo
        do {
            cout << "Destino (m�x 50 caracteres): ";
            fflush(stdin);
            gets(voo[i].destino);
            if (strlen(voo[i].destino) > 50) {
                cout << "Erro: o local de destino deve conter no m�ximo 50 caracteres! Tente novamente.\n" << endl;
            }
        } while (strlen(voo[i].destino) > 50);

        // Passagem para mai�sculo
        strupr(voo[i].destino);
    }

    cout << endl << "PESQUISADOR DE VOOS\n" << endl;

    // Leitura da origem atual para pesquisa
    do {
        cout << "Informe a origem (m�x 50 caracteres): ";
        fflush(stdin);
        gets(user_origem);
        if (strlen(user_origem) > 50) {
            cout << "Erro: o local de origem deve conter no m�ximo 50 caracteres! Tente novamente.\n" << endl;
        }
    } while (strlen(user_origem) > 50);

    // Passagem para mai�sculo
    strupr(user_origem);

    // La�o para encontrar voo dispon�vel
    for(i = 0; i < 10; i++) {

        // Existindo tal voo, o resultado � exibido
        if(strcmp(voo[i].origem, user_origem) == 0) {
            cout << endl << "Voo " << i+1 << " encontrado!" << endl <<
                    "C�digo: " << voo[i].codigo << endl <<
                    "Hor�rio: ";

                    // Formata��o de hor�rio
                    if(voo[i].hora < 10) {
                        cout << "0";
                    }
                    cout << voo[i].hora << ":";

                    if(voo[i].minuto < 10) {
                        cout << "0";
                    }
                    cout << voo[i].minuto;
                    cout << endl << "N�mero de Passageiros: " << voo[i].passageiros << endl <<
                    "Valor: R$" << fixed << setprecision(2) << voo[i].valor << endl <<
                    "Origem: " << voo[i].origem << endl <<
                    "Destino: " << voo[i].destino << endl <<
                    "\n----------------------" << endl;

            // Atribuidor l�gico
            flag = 1;
        }
    }

    // Verifica��o l�gica
    if(flag == 1) {
        cout << "\nFim da Listagem de Voos Dispon�veis\n" << endl;
    } else {
        cout << "\nPoxa, que pena! N�o temos nenhum voo dispon�vel para sua origem :(\n" << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para cadastrar o hor�rio de partida dos 10 voos di�rios de uma certa companhia,
    com os dados: c�digo, hor�rio de partida, quantidade de passageiros, valor da passagem, origem e
    destino. Solicitar ao usu�rio a origem e mostrar todos os dados dos voos que possuem esta origem.
*/
