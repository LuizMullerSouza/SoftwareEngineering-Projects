// Bibliotecas
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <locale.h>

// Constante
#define tam 50

// Importa��o de ferramentas
using namespace std;

// Struct para leitura de dados do(s) im�vel(eis)
struct info {

    int tipo;
    char endereco[tam];
    char bairro[tam];
    float valor;
    int situacao;

};

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    info imovel[tam];
    int i, cad, pesquisar, flag = 0;

    cout << "CADASTRADOR DE IM�VEIS\n" << endl;

    // La�o para leitura de quantos im�veis ser�o cadastrados
    do {

        cout << "Informe quantos im�veis ser�o cadastrados (<=50): ";
        cin >> cad;
        if(cad < 1 || cad > 50) {
            cout << "Erro: a quantidade deve ser positiva e <=50!\n" << endl;
        }

    } while (cad < 1 || cad > 50);

    // La�o para cadastramento de im�vel
    for (i = 0; i < cad; i++) {

        cout << endl << "CADASTRAR " << i+1 << "� IM�VEL\n" << endl;

        cout << "LOJA - 1 | APARTAMENTO - 2 | CASA - 3 | QUITINETE - 4\n";

        // La�o para garantir a leitura correta dos dados
        do {
            cout << "Informe o tipo do im�vel: ";
            cin >> imovel[i].tipo;
            if(imovel[i].tipo < 1 || imovel[i].tipo > 4) {
                cout << "Erro: o c�digo informado para o tipo de im�vel � inv�lido! Tente novamente.\n" << endl;
            }
        } while (imovel[i].tipo < 1 || imovel[i].tipo > 4);

        // Leitura de dados com limpeza no buffer
        cout << "Informe o endere�o do im�vel (m�x 50 caracteres): ";
        fflush(stdin);
        gets(imovel[i].endereco);

        cout << "Informe o bairro do im�vel (m�x 50 caracteres): ";
        fflush(stdin);
        gets(imovel[i].bairro);

        cout << "Informe o valor do im�vel: R$";
        cin >> imovel[i].valor;

        cout << "\nALUGUEL - 1 | VENDA - 2\n";

        // La�o para garantir a leitura correta dos dados
        do {
            cout << "Informe a situa��o do im�vel: ";
            cin >> imovel[i].situacao;
            if (imovel[i].situacao < 1 || imovel[i].situacao > 2) {
            cout << "Erro: o c�digo informado para a situa��o do im�vel � inv�lido! Tente novamente.\n" << endl;
            }
        } while (imovel[i].situacao < 1 || imovel[i].situacao > 2);
    }

    // Se��o de pesquisa
    cout << "\nPESQUISAR POR IM�VEIS\n" << endl;

    cout << "ALUGUEL - 1 | VENDA - 2\n";

    // La�o para garantir a leitura correta dos dados
    do {
        cout << "Informe a situa��o do im�vel na qual voc� deseja procurar: ";
        cin >> pesquisar;
        if(pesquisar < 1 || pesquisar > 2){
            cout << "Erro: o c�digo informado para a situa��o do im�vel � inv�lido! Tente novamente.\n" << endl;
        }
    } while(pesquisar < 1 || pesquisar > 2);

    // Verifica��o do tipo de im�vel buscado
    if (pesquisar == 1) {
            cout << "\nVOC� BUSCA POR IM�VEIS DE ALUGEL!\n" << endl;
    } else {
            cout << "\nVOC� BUSCA POR IM�VEIS A VENDA!\n" << endl;
    }

    // La�o para exibir os im�veis encontrados
    for (i = 0; i < cad; i++) {
            if(imovel[i].situacao == pesquisar) {
                cout << "Im�vel " << i+1 << " encontrado!\n";
                switch (imovel[i].tipo) {
                    case 1:
                        cout << "Tipo: Loja\n";
                        break;
                    case 2:
                        cout << "Tipo: Apartamento\n";
                        break;
                    case 3:
                        cout << "Tipo: Casa\n";
                        break;
                    case 4:
                        cout << "Tipo: Quitinete\n";
                }
                cout << "Endere�o: " << imovel[i].endereco << endl;
                cout << "Bairro: " << imovel[i].bairro << endl;
                cout << "Valor: R$" << fixed << setprecision(2) << imovel[i].valor << endl;
                cout << "Situa��o: Aluguel\n" << endl;
                flag = 1;
            }
        }

        // Verifica��o l�gica
        if(flag == 0) {
            cout << "Poxa, que pena! Nenhum im�vel nessa situa��o foi cadastrado :(\n" << endl;
        }

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para cadastrar at� 50 im�veis a serem alugados ou vendidos, contendo os seguintes
    dados: tipo (loja, apartamento, casa, quitinete), endere�o, bairro, valor, situa��o (aluguel ou
    venda). Ao final, solicitar ao usu�rio a situa��o a ser pesquisada e mostrar todos os dados dos
    im�veis enquadrados na solicita��o.
*/
