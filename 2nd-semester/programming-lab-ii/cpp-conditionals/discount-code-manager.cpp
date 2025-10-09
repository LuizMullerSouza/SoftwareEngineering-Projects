// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importa��o de ferramentas
using namespace std;

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int codigo, flag;
    float valor;

    cout << "GERENCIADOR DE DESCONTOS\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe o valor do produto: R$";
    cin >> valor;
    cout << "Informe o c�digo do produto: ";
    cin >> codigo;

    // Condi��o para verificar o c�digo
    switch (codigo) {

        case 1001:
            valor = valor - valor * 0.22;
            flag = 1;
            break;

        case 1254:
            valor = valor - valor * 0.3;
            flag = 1;
            break;

        case 1548:
            valor = valor - valor * 0.32;
            flag = 1;
            break;

        case 1687:
            valor = valor - valor * 0.37;
            flag = 1;
            break;

        case 1923:
            valor = valor - valor * 0.4;
            flag = 1;
            break;

        // Caso o c�digo for inv�lido
        default:
            flag = 0;
    }

    // Condi��o l�gica para flag e exibi��o do resultado
    if (flag == 1) {
        cout << "\nProduto com desconto: R$" << fixed << setprecision(2) << valor << endl;
    } else {
        cout << "\nErro: c�digo inv�lido!" << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Uma loja de materiais de constru��o pretende promover uma liquida��o de seu estoque com descontos
    vari�veis de acordo com o produto. Para isto, a loja necessita de um programa para ler o c�digo e
    o valor do produto e, em seguida, calcular e mostrar o valor do produto com o devido desconto,
    conforme apresenta a tabela abaixo. Dessa forma, fa�a o programa que atenda a necessidade da loja.
    C�digos e Descontos: 1001 - 22% : 1254 - 30% : 1548 - 32% : 1687 - 37% : 1923 - 40%.
*/
