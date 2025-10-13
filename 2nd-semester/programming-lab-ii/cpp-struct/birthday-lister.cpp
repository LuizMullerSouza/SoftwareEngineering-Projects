// Bibliotecas
#include <iostream>
#include <cstdio>
#include <cstring>
#include <locale.h>

// Constante
#define tam 51

// Importa��o de ferramentas
using namespace std;

// Struct para leitura de dados das 40 pessoas
struct info {

    char nome[tam];
    int dia;
    int mes;

};

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    info pessoa[40];
    int i, aux, flag;

    cout << "GERENCIADOR DE ANIVERS�RIOS\n";

    // La�o para cadastramento dos anivers�rios
    for (i = 0; i < 40; i++) {

        cout << "\nCadastro do " << i+1 << "� Anivers�rio\n";

        // La�o para garantir a leitura correta do nome do aniversariante
        do {

            cout << "Informe o nome da pessoa (m�x 50 caracteres): ";
            fflush(stdin);
            gets(pessoa[i].nome);
            if(strlen(pessoa[i].nome) > 50) {
                cout << "Erro: o nome informado deve conter no m�ximos 50 caracteres! Tente novamente.\n" << endl;
            }

        } while (strlen(pessoa[i].nome) > 50);

        // La�o para garantir a leitura correta do dia do anivers�rio
        do {

            cout << "Informe o dia do anivers�rio: ";
            cin >> pessoa[i].dia;
            if(pessoa[i].dia < 1 || pessoa[i].dia > 31) {
                cout << "Erro: o dia informado deve ser positivo e <=31! Tente novamente.\n" << endl;
            }

        } while (pessoa[i].dia < 1 || pessoa[i].dia > 31);

        // La�o para garantir a leitura correta do m�s do anivers�rio
        do {

            cout << "Informe o m�s do anivers�rio: ";
            cin >> pessoa[i].mes;
            if(pessoa[i].mes < 1 || pessoa[i].mes > 12) {
                cout << "Erro: o m�s informado deve ser positivo e <=12! Tente novamente.\n" << endl;
            }

        } while (pessoa[i].mes < 1 || pessoa[i].mes > 12);

    }

    cout << "\nRESULTADO DOS ANIVERS�RIOS CADASTRADOS\n";

    // La�o para exibir resultado
    for (aux = 1; aux <= 12; aux++) {
        cout << "---------------------";
        cout << endl << "M�s " << aux << endl;
        flag = 0;

        for (i = 0; i < 40; i++) {

            // Exibindo dados do aniversariante encontrado
            if(pessoa[i].mes == aux) {

                cout << endl << strupr(pessoa[i].nome) << " faz anivers�rio no m�s " << aux << endl;

                // Formata��o de escrita
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

                // Atribuidor l�gico
                flag = 1;
            }

        }

        // Verifica��o l�gica
        if (flag == 0) {
            cout << "Poxa, que pena! Ningu�m fez anivers�rio no m�s " << aux << " :(" << endl;
        }
    }

    // Fim do programa
    cout << "\nFIM DA LISTAGEM\n" << endl;

    // Executado com sucesso
    return 0;
}

/*
    Dados os seguintes campos de um registro: nome, dia de anivers�rio e m�s de anivers�rio, fa�a
    um programa que mostre em cada um dos meses do ano quem s�o as pessoas que fazem anivers�rio,
    exibir tamb�m o dia. Considere um conjunto de 40 pessoas.
*/
