// Bibliotecas
#include <iostream>
#include <iomanip>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int codigo, flag;
    float valor;

    cout << "GERENCIADOR DE DESCONTOS\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe o valor do produto: R$";
    cin >> valor;
    cout << "Informe o código do produto: ";
    cin >> codigo;

    // Condição para verificar o código
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

        // Caso o código for inválido
        default:
            flag = 0;
    }

    // Condição lógica para flag e exibição do resultado
    if (flag == 1) {
        cout << "\nProduto com desconto: R$" << fixed << setprecision(2) << valor << endl;
    } else {
        cout << "\nErro: código inválido!" << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Uma loja de materiais de construção pretende promover uma liquidação de seu estoque com descontos
    variáveis de acordo com o produto. Para isto, a loja necessita de um programa para ler o código e
    o valor do produto e, em seguida, calcular e mostrar o valor do produto com o devido desconto,
    conforme apresenta a tabela abaixo. Dessa forma, faça o programa que atenda a necessidade da loja.
    Códigos e Descontos: 1001 - 22% : 1254 - 30% : 1548 - 32% : 1687 - 37% : 1923 - 40%.
*/
