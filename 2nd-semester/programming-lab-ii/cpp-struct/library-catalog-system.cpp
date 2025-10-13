// Bibliotecas
#include <iostream>
#include <cstdio>
#include <cstring>
#include <locale.h>

// Constantes
#define TAM 51
#define COUNT 1500

// Importa��o de ferramentas
using namespace std;

// Struct para leitura de dados dos livros
struct info {

    int codigo;
    char doacao;
    char nomeObra[TAM];
    char nomeAutor[TAM];
    char nomeEditora[TAM];

};

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    info exatas[COUNT], humanas[COUNT], biologicas[COUNT];
    int cod, verifier, contE = 0, contH = 0, contB = 0;

    cout << "GERENCIADOR DE LIVROS\n";

    // Loop para garantir a leitura correta dos dados
    do {
        // Usu�rio informa se deseja cadastrar livros de exatas
        cout << endl << "Deseja cadastrar livros de Ci�ncias Exatas? (1 - Sim | 0 - N�o): ";
        cin >> verifier;
        if(verifier < 0 || verifier > 1)
            cout << "Erro: o c�digo � inv�lido! Tente novamente." << endl;
    } while (verifier < 0 || verifier > 1);

    // A verifica��o sendo verdadeira, o cadastro ocorre
    if(verifier == 1) {

        cout << endl << "Cadastro dos Livros de Ci�ncias Exatas\n";

        do {
            cout << endl << "Cadastro do " << contE+1 << "� Livro" << endl;

            // Entrada e leitura do c�digo
            cout << "Informe o c�digo: ";
            cin >> exatas[contE].codigo;

            // Entrada e leitura da doa��o
            cout << "Informe a doa��o (S/N): ";
            cin >> exatas[contE].doacao;

            // Entrada e leitura do nome da obra, com limpeza no buffer
            cout << "Informe o nome da obra (m�x 50 caracteres): ";
            fflush(stdin);
            gets(exatas[contE].nomeObra);

            // Entrada e leitura do nome do autor, com limpeza no buffer
            cout << "Informe o nome do autor (m�x 50 caracteres): ";
            fflush(stdin);
            gets(exatas[contE].nomeAutor);

            // Entrada e leitura do nome da editora, com limpeza no buffer
            cout << "Informe o nome da editora (m�x 50 caracteres): ";
            fflush(stdin);
            gets(exatas[contE].nomeEditora);

            // Loop para verificar se mais livros ser�o cadastrados
            do {
                cout << endl << "Deseja cadastrar mais um livro de Ci�ncias Exatas? (1 - Sim | 0 - N�o): ";
                cin >> verifier;
                if(verifier < 0 || verifier > 1)
                    cout << "Erro: o c�digo � inv�lido! Tente novamente." << endl;
            } while (verifier < 0 || verifier > 1);

            // Atribuidor para a quantidade de livros existentes
            contE++;

        } while(verifier == 1);

        // Fim do cadastro de exatas
        if (contE) {
            cout << endl << "Fim do Cadastro dos Livros de Ci�ncias Exatas" << endl;
        }
    }

    // Loop para garantir a leitura correta dos dados
    do {
        // Usu�rio informa se deseja cadastrar livros de humanas
        cout << endl << "Deseja cadastrar livros de Ci�ncias Humanas? (1 - Sim | 0 - N�o): ";
        cin >> verifier;
        if(verifier < 0 || verifier > 1)
            cout << "Erro: o c�digo � inv�lido! Tente novamente." << endl;
    } while (verifier < 0 || verifier > 1);

    // A verifica��o sendo verdadeira, o cadastro ocorre
    if(verifier == 1) {

        cout << endl << "Cadastro dos Livros de Ci�ncias Humanas\n";

        do {
            cout << endl << "Cadastro do " << contH+1 << "� Livro" << endl;

            // Entrada e leitura do c�digo
            cout << "Informe o c�digo: ";
            cin >> humanas[contH].codigo;

            // Entrada e leitura da doa��o
            cout << "Informe a doa��o (S/N): ";
            cin >> humanas[contH].doacao;

            // Entrada e leitura do nome da obra, com limpeza no buffer
            cout << "Informe o nome da obra (m�x 50 caracteres): ";
            fflush(stdin);
            gets(humanas[contH].nomeObra);

            // Entrada e leitura do nome do autor, com limpeza no buffer
            cout << "Informe o nome do autor (m�x 50 caracteres): ";
            fflush(stdin);
            gets(humanas[contH].nomeAutor);

            // Entrada e leitura do nome da editora, com limpeza no buffer
            cout << "Informe o nome da editora (m�x 50 caracteres): ";
            fflush(stdin);
            gets(humanas[contH].nomeEditora);

            // Loop para verificar se mais livros ser�o cadastrados
            do {
                cout << endl << "Deseja cadastrar mais um livro de Ci�ncias Humanas? (1 - Sim | 0 - N�o): ";
                cin >> verifier;
                if(verifier < 0 || verifier > 1)
                    cout << "Erro: o c�digo � inv�lido! Tente novamente." << endl;
            } while (verifier < 0 || verifier > 1);

            // Atribuidor para a quantidade de livros existentes
            contH++;

        } while(verifier == 1);

        // Fim do cadastro de humanas
        if (contH) {
            cout << endl << "Fim do Cadastro dos Livros de Ci�ncias Humanas" << endl;
        }
    }

    // Loop para garantir a leitura correta dos dados
    do {
        // Usu�rio informa se deseja cadastrar livros de biol�gicas
        cout << endl << "Deseja cadastrar livros de Ci�ncias Biol�gicas? (1 - Sim | 0 - N�o): ";
        cin >> verifier;
        if(verifier < 0 || verifier > 1)
            cout << "Erro: o c�digo � inv�lido! Tente novamente." << endl;
    } while (verifier < 0 || verifier > 1);

    // A verifica��o sendo verdadeira, o cadastro ocorre
    if(verifier == 1) {

        cout << endl << "Cadastro dos Livros de Ci�ncias Biol�gicas\n";

        do {
            cout << endl << "Cadastro do " << contB+1 << "� Livro" << endl;

            // Entrada e leitura do c�digo
            cout << "Informe o c�digo: ";
            cin >> biologicas[contB].codigo;

            // Entrada e leitura da doa��o
            cout << "Informe a doa��o (S/N): ";
            cin >> biologicas[contB].doacao;

            // Entrada e leitura do nome da obra, com limpeza no buffer
            cout << "Informe o nome da obra (m�x 50 caracteres): ";
            fflush(stdin);
            gets(biologicas[contB].nomeObra);

            // Entrada e leitura do nome do autor, com limpeza no buffer
            cout << "Informe o nome do autor (m�x 50 caracteres): ";
            fflush(stdin);
            gets(biologicas[contB].nomeAutor);

            // Entrada e leitura do nome da editora, com limpeza no buffer
            cout << "Informe o nome da editora (m�x 50 caracteres): ";
            fflush(stdin);
            gets(biologicas[contB].nomeEditora);

            // Loop para verificar se mais livros ser�o cadastrados
            do {
                cout << endl << "Deseja cadastrar mais um livro de Ci�ncias Biol�gicas? (1 - Sim | 0 - N�o): ";
                cin >> verifier;
                if(verifier < 0 || verifier > 1)
                    cout << "Erro: o c�digo � inv�lido! Tente novamente." << endl;
            } while (verifier < 0 || verifier > 1);

            // Atribuidor para a quantidade de livros existentes
            contB++;

        } while(verifier == 1);

        // Fim do cadastro de biol�gicas
        if (contB) {
            cout << endl << "Fim do Cadastro dos Livros de Ci�ncias Biol�gicas" << endl;
        }
    }

    // Loop para pesquisa
    do {

        // Loop para garantir a leitura correta da �rea buscada
        do {
            cout << endl << "Escolha uma �rea para pesquisar (1 - Exatas | 2 - Humanas | 3 - Biol�gicas | -1 - Sair): ";
            cin >> verifier;
            if (verifier < -1 || verifier > 3 || verifier == 0) {
                cout << "Erro: o c�digo � inv�lido! Tente novamente." << endl;
            }
        } while (verifier < -1 || verifier > 3 || verifier == 0);

        // A verifica��o sendo -1, o programa j� dever� ser encerrado
        if (verifier == -1) {
            cout << endl << "Fim do Programa.\n" << endl;
        }
        // Quando n�o, a busca prossegue
        else {

            // Entrada e leitura do c�digo de cataloga��o
            cout << "Informe o c�digo de cataloga��o: ";
            cin >> cod;

            int flag = 0;

            // Condici��o para verificar o c�digo por �rea
            switch (verifier) {
                case 1:
                    for (int i = 0; i < contE; i++) {
                        if (cod == exatas[i].codigo) {
                            cout << "\nLivro Encontrado!" << endl
                                 << "�rea: Ci�ncias Exatas" << endl
                                 << "C�digo: " << exatas[i].codigo << endl
                                 << "Doa��o: " << exatas[i].doacao << endl
                                 << "Obra: " << exatas[i].nomeObra << endl
                                 << "Autor: " << exatas[i].nomeAutor << endl
                                 << "Editora: " << exatas[i].nomeEditora << endl;
                            flag = 1;
                            break;
                        }
                    }
                    break;
                case 2:
                    for (int i = 0; i < contH; i++) {
                        if (cod == humanas[i].codigo) {
                            cout << "\nLivro Encontrado!" << endl
                                 << "�rea: Ci�ncias Humanas" << endl
                                 << "C�digo: " << humanas[i].codigo << endl
                                 << "Doa��o: " << humanas[i].doacao << endl
                                 << "Obra: " << humanas[i].nomeObra << endl
                                 << "Autor: " << humanas[i].nomeAutor << endl
                                 << "Editora: " << humanas[i].nomeEditora << endl;
                            flag = 1;
                            break;
                        }
                    }
                    break;
                case 3:
                    for (int i = 0; i < contB; i++) {
                        if (cod == biologicas[i].codigo) {
                            cout << "\nLivro Encontrado!" << endl
                                 << "�rea: Ci�ncias Biol�gicas" << endl
                                 << "C�digo: " << biologicas[i].codigo << endl
                                 << "Doa��o: " << biologicas[i].doacao << endl
                                 << "Obra: " << biologicas[i].nomeObra << endl
                                 << "Autor: " << biologicas[i].nomeAutor << endl
                                 << "Editora: " << biologicas[i].nomeEditora << endl;
                            flag = 1;
                            break;
                        }
                    }
                    break;
            }

            // Verifica��o l�gica
            if (flag == 0) {
                cout << "\nLivro n�o encontrado! Tente novamente." << endl;
            }
        }
    } while (verifier != -1);

    // Executado com sucesso
    return 0;
}

/*
    Uma determinada biblioteca possui obras de ci�ncias exatas, humanas e biol�gicas, totalizando 1500 volumes,
    distribu�dos em cada uma das �reas. O propriet�rio resolveu agrupar as informa��es de cada livro no seguinte
    registro: C�digo de cataloga��o, Doa��o (S/N), Nome da obra, Nome do autor, Editora. Fa�a um programa que:
    a) cadastre todos os volumes de cada uma das �reas em tr�s vetores distintos.
    b) permita ao usu�rio fazer consulta �s informa��es cadastradas fornecendo o c�digo de cataloga��o e a �rea.
    Existindo tal livro as informa��es s�o exibidas, caso contr�rio enviar mensagem de aviso.
    A consulta se repete at� que o usu�rio digite c�digo finalizador = -1.
*/
