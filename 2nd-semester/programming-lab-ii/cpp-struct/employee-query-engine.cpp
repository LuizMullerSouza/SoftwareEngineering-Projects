// Bibliotecas
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <locale.h>

// Constante
#define tam 50

// Importação de ferramentas
using namespace std;

// Struct para leitura de dados do(s) funcionário(s)
struct info {

    char nome[tam];
    float salario;
    int e_civil;
    int sexo;
    int n_dependentes;
    char cidade[tam];
    char estado[3];

};

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    info funcionario[200];
    int i, cad, flag = 0;

    cout << "GERENCIADOR DE FUNCIONÁRIOS\n" << endl;

    // Laço para garantir a leitura correta dos dados
    do {
        cout << "Informe quantos funcionários serão cadastrados (<=200): ";
        cin >> cad;
        if (cad < 1 || cad > 200) {
            cout << "Erro: a quantidade informada deve ser positiva e <=200! Tente novamente.\n" << endl;
        }
    } while (cad < 1 || cad > 200);

    cout << "\nCADASTRO DE FUNCIONÁRIOS\n";

    // Laço para cadastramento de funcionário(s)
    for(i = 0; i < cad; i++) {

        cout << endl << "Cadastro do " << i+1 << "° Funcionário" << endl;

        // Leitura com limpeza no buffer
        cout << "Informe o nome (máx 49 caracteres): ";
        fflush(stdin);
        gets(funcionario[i].nome);

        cout << "Informe o salário: R$";
        cin >> funcionario[i].salario;

        cout << endl << "Solteiro - 1 | Casado - 2 | Divorciado - 3 | Viúvo - 4" << endl;

        // Laço para garantir a leitura correta dos dados
        do {
            cout << "Informe o estado civil: ";
            cin >> funcionario[i].e_civil;
            if (funcionario[i].e_civil < 1 || funcionario[i].e_civil > 4) {
                cout << "Erro: o código informado deve ser entre 1 e 4! Tente novamente.\n" << endl;
            }
        } while (funcionario[i].e_civil < 1 || funcionario[i].e_civil > 4);

        cout << endl << "Masculino - 1 | Feminino - 2" << endl;

        // Laço para garantir a leitura correta dos dados
        do {
            cout << "Informe o sexo: ";
            cin >> funcionario[i].sexo;
            if (funcionario[i].sexo < 1 || funcionario[i].sexo > 2) {
                cout << "Erro: o código informado deve ser 1 ou 2! Tente novamente.\n" << endl;
            }
        } while (funcionario[i].sexo < 1 || funcionario[i].sexo > 2);

        cout << endl << "Informe o número de dependentes: ";
        cin >> funcionario[i].n_dependentes;

        // Leitura com limpeza no buffer
        cout << "Informe a cidade: ";
        fflush(stdin);
        gets(funcionario[i].cidade);

        // Laço para garantir a leitura correta dos dados
        do {
            cout << "Informe o estado (XX): ";
            fflush(stdin);
            gets(funcionario[i].estado);
            if(strlen(funcionario[i].estado) != 2) {
                cout << "Erro: o estado informado deve estar em formato XX! Tente novamente.\n" << endl;
            }

        } while (strlen(funcionario[i].estado) != 2);

        // Função para transformar o estado XX em maiúsculo
        strupr(funcionario[i].estado);

    }

    // Exibição do Resultado
    cout << "\nListagem dos funcionários(as) casados(as), residentes no MS e com salário acima de R$3.000,00\n";

    for(i = 0; i < cad; i++) {
        if ((funcionario[i].e_civil == 2) && (strcmp(funcionario[i].estado, "MS") == 0) && (funcionario[i].salario > 3000)) {
            cout << endl << "Funcionário " << i+1 << " encontrado!\n" <<
                    "Nome: " << funcionario[i].nome << endl <<
                    "Salário: R$" << fixed << setprecision(2) << funcionario[i].salario << endl <<
                    "Estado Civil: Casado(a)" << endl;
            if (funcionario[i].sexo == 1) {
                cout << "Sexo: Masculino" << endl;
            } else {
                cout << "Sexo: Feminino" << endl;
            }
            cout << "Cidade: " << strupr(funcionario[i].cidade) << endl <<
                    "Estado: " << strupr(funcionario[i].estado) << endl;

            // Atribuidor lógico
            flag = 1;
        }
    }

    // Verificação lógica
    if (flag == 1) {
        cout << "\nFim da Listagem!\n" << endl;
    } else {
        cout << "\nPoxa, que pena! Nenhum funcionário foi encontrado para a listagem :(\n" << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Faça um programa para ler os dados (nome, salário, estado civil, sexo, número de dependentes, cidade
    e estado de residência) dos funcionários de uma empresa e mostrar uma listagem de todos os dados dos
    funcionários(as) CASADOS(AS), residentes no MS e com SALÁRIO acima de R$ 3.000,00. Cadastrar no máximo
    200 funcionários.
*/
