// Bibliotecas
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <locale.h>

// Constante
#define tam 50

// Importação de ferramentas
using namespace std;

// Struct para leitura de dados do(s) imóvel(eis)
struct info {

    int tipo;
    char endereco[tam];
    char bairro[tam];
    float valor;
    int situacao;

};

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    info imovel[tam];
    int i, cad, pesquisar, flag = 0;

    cout << "CADASTRADOR DE IMÓVEIS\n" << endl;

    // Laço para leitura de quantos imóveis serão cadastrados
    do {

        cout << "Informe quantos imóveis serão cadastrados (<=50): ";
        cin >> cad;
        if(cad < 1 || cad > 50) {
            cout << "Erro: a quantidade deve ser positiva e <=50!\n" << endl;
        }

    } while (cad < 1 || cad > 50);

    // Laço para cadastramento de imóvel
    for (i = 0; i < cad; i++) {

        cout << endl << "CADASTRAR " << i+1 << "° IMÓVEL\n" << endl;

        cout << "LOJA - 1 | APARTAMENTO - 2 | CASA - 3 | QUITINETE - 4\n";

        // Laço para garantir a leitura correta dos dados
        do {
            cout << "Informe o tipo do imóvel: ";
            cin >> imovel[i].tipo;
            if(imovel[i].tipo < 1 || imovel[i].tipo > 4) {
                cout << "Erro: o código informado para o tipo de imóvel é inválido! Tente novamente.\n" << endl;
            }
        } while (imovel[i].tipo < 1 || imovel[i].tipo > 4);

        // Leitura de dados com limpeza no buffer
        cout << "Informe o endereço do imóvel (máx 50 caracteres): ";
        fflush(stdin);
        gets(imovel[i].endereco);

        cout << "Informe o bairro do imóvel (máx 50 caracteres): ";
        fflush(stdin);
        gets(imovel[i].bairro);

        cout << "Informe o valor do imóvel: R$";
        cin >> imovel[i].valor;

        cout << "\nALUGUEL - 1 | VENDA - 2\n";

        // Laço para garantir a leitura correta dos dados
        do {
            cout << "Informe a situação do imóvel: ";
            cin >> imovel[i].situacao;
            if (imovel[i].situacao < 1 || imovel[i].situacao > 2) {
            cout << "Erro: o código informado para a situação do imóvel é inválido! Tente novamente.\n" << endl;
            }
        } while (imovel[i].situacao < 1 || imovel[i].situacao > 2);
    }

    // Seção de pesquisa
    cout << "\nPESQUISAR POR IMÓVEIS\n" << endl;

    cout << "ALUGUEL - 1 | VENDA - 2\n";

    // Laço para garantir a leitura correta dos dados
    do {
        cout << "Informe a situação do imóvel na qual você deseja procurar: ";
        cin >> pesquisar;
        if(pesquisar < 1 || pesquisar > 2){
            cout << "Erro: o código informado para a situação do imóvel é inválido! Tente novamente.\n" << endl;
        }
    } while(pesquisar < 1 || pesquisar > 2);

    // Verificação do tipo de imóvel buscado
    if (pesquisar == 1) {
            cout << "\nVOCÊ BUSCA POR IMÓVEIS DE ALUGEL!\n" << endl;
    } else {
            cout << "\nVOCÊ BUSCA POR IMÓVEIS A VENDA!\n" << endl;
    }

    // Laço para exibir os imóveis encontrados
    for (i = 0; i < cad; i++) {
            if(imovel[i].situacao == pesquisar) {
                cout << "Imóvel " << i+1 << " encontrado!\n";
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
                cout << "Endereço: " << imovel[i].endereco << endl;
                cout << "Bairro: " << imovel[i].bairro << endl;
                cout << "Valor: R$" << fixed << setprecision(2) << imovel[i].valor << endl;
                cout << "Situação: Aluguel\n" << endl;
                flag = 1;
            }
        }

        // Verificação lógica
        if(flag == 0) {
            cout << "Poxa, que pena! Nenhum imóvel nessa situação foi cadastrado :(\n" << endl;
        }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para cadastrar até 50 imóveis a serem alugados ou vendidos, contendo os seguintes
    dados: tipo (loja, apartamento, casa, quitinete), endereço, bairro, valor, situação (aluguel ou
    venda). Ao final, solicitar ao usuário a situação a ser pesquisada e mostrar todos os dados dos
    imóveis enquadrados na solicitação.
*/
