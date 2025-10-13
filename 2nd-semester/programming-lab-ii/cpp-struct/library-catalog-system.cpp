// Bibliotecas
#include <iostream>
#include <cstdio>
#include <cstring>
#include <locale.h>

// Constantes
#define TAM 51
#define COUNT 1500

// Importação de ferramentas
using namespace std;

// Struct para leitura de dados dos livros
struct info {

    int codigo;
    char doacao;
    char nomeObra[TAM];
    char nomeAutor[TAM];
    char nomeEditora[TAM];

};

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    info exatas[COUNT], humanas[COUNT], biologicas[COUNT];
    int cod, verifier, contE = 0, contH = 0, contB = 0;

    cout << "GERENCIADOR DE LIVROS\n";

    // Loop para garantir a leitura correta dos dados
    do {
        // Usuário informa se deseja cadastrar livros de exatas
        cout << endl << "Deseja cadastrar livros de Ciências Exatas? (1 - Sim | 0 - Não): ";
        cin >> verifier;
        if(verifier < 0 || verifier > 1)
            cout << "Erro: o código é inválido! Tente novamente." << endl;
    } while (verifier < 0 || verifier > 1);

    // A verificação sendo verdadeira, o cadastro ocorre
    if(verifier == 1) {

        cout << endl << "Cadastro dos Livros de Ciências Exatas\n";

        do {
            cout << endl << "Cadastro do " << contE+1 << "° Livro" << endl;

            // Entrada e leitura do código
            cout << "Informe o código: ";
            cin >> exatas[contE].codigo;

            // Entrada e leitura da doação
            cout << "Informe a doação (S/N): ";
            cin >> exatas[contE].doacao;

            // Entrada e leitura do nome da obra, com limpeza no buffer
            cout << "Informe o nome da obra (máx 50 caracteres): ";
            fflush(stdin);
            gets(exatas[contE].nomeObra);

            // Entrada e leitura do nome do autor, com limpeza no buffer
            cout << "Informe o nome do autor (máx 50 caracteres): ";
            fflush(stdin);
            gets(exatas[contE].nomeAutor);

            // Entrada e leitura do nome da editora, com limpeza no buffer
            cout << "Informe o nome da editora (máx 50 caracteres): ";
            fflush(stdin);
            gets(exatas[contE].nomeEditora);

            // Loop para verificar se mais livros serão cadastrados
            do {
                cout << endl << "Deseja cadastrar mais um livro de Ciências Exatas? (1 - Sim | 0 - Não): ";
                cin >> verifier;
                if(verifier < 0 || verifier > 1)
                    cout << "Erro: o código é inválido! Tente novamente." << endl;
            } while (verifier < 0 || verifier > 1);

            // Atribuidor para a quantidade de livros existentes
            contE++;

        } while(verifier == 1);

        // Fim do cadastro de exatas
        if (contE) {
            cout << endl << "Fim do Cadastro dos Livros de Ciências Exatas" << endl;
        }
    }

    // Loop para garantir a leitura correta dos dados
    do {
        // Usuário informa se deseja cadastrar livros de humanas
        cout << endl << "Deseja cadastrar livros de Ciências Humanas? (1 - Sim | 0 - Não): ";
        cin >> verifier;
        if(verifier < 0 || verifier > 1)
            cout << "Erro: o código é inválido! Tente novamente." << endl;
    } while (verifier < 0 || verifier > 1);

    // A verificação sendo verdadeira, o cadastro ocorre
    if(verifier == 1) {

        cout << endl << "Cadastro dos Livros de Ciências Humanas\n";

        do {
            cout << endl << "Cadastro do " << contH+1 << "° Livro" << endl;

            // Entrada e leitura do código
            cout << "Informe o código: ";
            cin >> humanas[contH].codigo;

            // Entrada e leitura da doação
            cout << "Informe a doação (S/N): ";
            cin >> humanas[contH].doacao;

            // Entrada e leitura do nome da obra, com limpeza no buffer
            cout << "Informe o nome da obra (máx 50 caracteres): ";
            fflush(stdin);
            gets(humanas[contH].nomeObra);

            // Entrada e leitura do nome do autor, com limpeza no buffer
            cout << "Informe o nome do autor (máx 50 caracteres): ";
            fflush(stdin);
            gets(humanas[contH].nomeAutor);

            // Entrada e leitura do nome da editora, com limpeza no buffer
            cout << "Informe o nome da editora (máx 50 caracteres): ";
            fflush(stdin);
            gets(humanas[contH].nomeEditora);

            // Loop para verificar se mais livros serão cadastrados
            do {
                cout << endl << "Deseja cadastrar mais um livro de Ciências Humanas? (1 - Sim | 0 - Não): ";
                cin >> verifier;
                if(verifier < 0 || verifier > 1)
                    cout << "Erro: o código é inválido! Tente novamente." << endl;
            } while (verifier < 0 || verifier > 1);

            // Atribuidor para a quantidade de livros existentes
            contH++;

        } while(verifier == 1);

        // Fim do cadastro de humanas
        if (contH) {
            cout << endl << "Fim do Cadastro dos Livros de Ciências Humanas" << endl;
        }
    }

    // Loop para garantir a leitura correta dos dados
    do {
        // Usuário informa se deseja cadastrar livros de biológicas
        cout << endl << "Deseja cadastrar livros de Ciências Biológicas? (1 - Sim | 0 - Não): ";
        cin >> verifier;
        if(verifier < 0 || verifier > 1)
            cout << "Erro: o código é inválido! Tente novamente." << endl;
    } while (verifier < 0 || verifier > 1);

    // A verificação sendo verdadeira, o cadastro ocorre
    if(verifier == 1) {

        cout << endl << "Cadastro dos Livros de Ciências Biológicas\n";

        do {
            cout << endl << "Cadastro do " << contB+1 << "° Livro" << endl;

            // Entrada e leitura do código
            cout << "Informe o código: ";
            cin >> biologicas[contB].codigo;

            // Entrada e leitura da doação
            cout << "Informe a doação (S/N): ";
            cin >> biologicas[contB].doacao;

            // Entrada e leitura do nome da obra, com limpeza no buffer
            cout << "Informe o nome da obra (máx 50 caracteres): ";
            fflush(stdin);
            gets(biologicas[contB].nomeObra);

            // Entrada e leitura do nome do autor, com limpeza no buffer
            cout << "Informe o nome do autor (máx 50 caracteres): ";
            fflush(stdin);
            gets(biologicas[contB].nomeAutor);

            // Entrada e leitura do nome da editora, com limpeza no buffer
            cout << "Informe o nome da editora (máx 50 caracteres): ";
            fflush(stdin);
            gets(biologicas[contB].nomeEditora);

            // Loop para verificar se mais livros serão cadastrados
            do {
                cout << endl << "Deseja cadastrar mais um livro de Ciências Biológicas? (1 - Sim | 0 - Não): ";
                cin >> verifier;
                if(verifier < 0 || verifier > 1)
                    cout << "Erro: o código é inválido! Tente novamente." << endl;
            } while (verifier < 0 || verifier > 1);

            // Atribuidor para a quantidade de livros existentes
            contB++;

        } while(verifier == 1);

        // Fim do cadastro de biológicas
        if (contB) {
            cout << endl << "Fim do Cadastro dos Livros de Ciências Biológicas" << endl;
        }
    }

    // Loop para pesquisa
    do {

        // Loop para garantir a leitura correta da área buscada
        do {
            cout << endl << "Escolha uma área para pesquisar (1 - Exatas | 2 - Humanas | 3 - Biológicas | -1 - Sair): ";
            cin >> verifier;
            if (verifier < -1 || verifier > 3 || verifier == 0) {
                cout << "Erro: o código é inválido! Tente novamente." << endl;
            }
        } while (verifier < -1 || verifier > 3 || verifier == 0);

        // A verificação sendo -1, o programa já deverá ser encerrado
        if (verifier == -1) {
            cout << endl << "Fim do Programa.\n" << endl;
        }
        // Quando não, a busca prossegue
        else {

            // Entrada e leitura do código de catalogação
            cout << "Informe o código de catalogação: ";
            cin >> cod;

            int flag = 0;

            // Condicição para verificar o código por área
            switch (verifier) {
                case 1:
                    for (int i = 0; i < contE; i++) {
                        if (cod == exatas[i].codigo) {
                            cout << "\nLivro Encontrado!" << endl
                                 << "Área: Ciências Exatas" << endl
                                 << "Código: " << exatas[i].codigo << endl
                                 << "Doação: " << exatas[i].doacao << endl
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
                                 << "Área: Ciências Humanas" << endl
                                 << "Código: " << humanas[i].codigo << endl
                                 << "Doação: " << humanas[i].doacao << endl
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
                                 << "Área: Ciências Biológicas" << endl
                                 << "Código: " << biologicas[i].codigo << endl
                                 << "Doação: " << biologicas[i].doacao << endl
                                 << "Obra: " << biologicas[i].nomeObra << endl
                                 << "Autor: " << biologicas[i].nomeAutor << endl
                                 << "Editora: " << biologicas[i].nomeEditora << endl;
                            flag = 1;
                            break;
                        }
                    }
                    break;
            }

            // Verificação lógica
            if (flag == 0) {
                cout << "\nLivro não encontrado! Tente novamente." << endl;
            }
        }
    } while (verifier != -1);

    // Executado com sucesso
    return 0;
}

/*
    Uma determinada biblioteca possui obras de ciências exatas, humanas e biológicas, totalizando 1500 volumes,
    distribuídos em cada uma das áreas. O proprietário resolveu agrupar as informações de cada livro no seguinte
    registro: Código de catalogação, Doação (S/N), Nome da obra, Nome do autor, Editora. Faça um programa que:
    a) cadastre todos os volumes de cada uma das áreas em três vetores distintos.
    b) permita ao usuário fazer consulta às informações cadastradas fornecendo o código de catalogação e a área.
    Existindo tal livro as informações são exibidas, caso contrário enviar mensagem de aviso.
    A consulta se repete até que o usuário digite código finalizador = -1.
*/
