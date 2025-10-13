// Bibliotecas
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <locale.h>

// Constante
#define tam 50

// Importa��o de ferramentas
using namespace std;

// Struct para leitura de dados do(s) funcion�rio(s)
struct info {

    char nome[tam];
    float salario;
    int e_civil;
    int sexo;
    int n_dependentes;
    char cidade[tam];
    char estado[3];

};

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    info funcionario[200];
    int i, cad, flag = 0;

    cout << "GERENCIADOR DE FUNCION�RIOS\n" << endl;

    // La�o para garantir a leitura correta dos dados
    do {
        cout << "Informe quantos funcion�rios ser�o cadastrados (<=200): ";
        cin >> cad;
        if (cad < 1 || cad > 200) {
            cout << "Erro: a quantidade informada deve ser positiva e <=200! Tente novamente.\n" << endl;
        }
    } while (cad < 1 || cad > 200);

    cout << "\nCADASTRO DE FUNCION�RIOS\n";

    // La�o para cadastramento de funcion�rio(s)
    for(i = 0; i < cad; i++) {

        cout << endl << "Cadastro do " << i+1 << "� Funcion�rio" << endl;

        // Leitura com limpeza no buffer
        cout << "Informe o nome (m�x 49 caracteres): ";
        fflush(stdin);
        gets(funcionario[i].nome);

        cout << "Informe o sal�rio: R$";
        cin >> funcionario[i].salario;

        cout << endl << "Solteiro - 1 | Casado - 2 | Divorciado - 3 | Vi�vo - 4" << endl;

        // La�o para garantir a leitura correta dos dados
        do {
            cout << "Informe o estado civil: ";
            cin >> funcionario[i].e_civil;
            if (funcionario[i].e_civil < 1 || funcionario[i].e_civil > 4) {
                cout << "Erro: o c�digo informado deve ser entre 1 e 4! Tente novamente.\n" << endl;
            }
        } while (funcionario[i].e_civil < 1 || funcionario[i].e_civil > 4);

        cout << endl << "Masculino - 1 | Feminino - 2" << endl;

        // La�o para garantir a leitura correta dos dados
        do {
            cout << "Informe o sexo: ";
            cin >> funcionario[i].sexo;
            if (funcionario[i].sexo < 1 || funcionario[i].sexo > 2) {
                cout << "Erro: o c�digo informado deve ser 1 ou 2! Tente novamente.\n" << endl;
            }
        } while (funcionario[i].sexo < 1 || funcionario[i].sexo > 2);

        cout << endl << "Informe o n�mero de dependentes: ";
        cin >> funcionario[i].n_dependentes;

        // Leitura com limpeza no buffer
        cout << "Informe a cidade: ";
        fflush(stdin);
        gets(funcionario[i].cidade);

        // La�o para garantir a leitura correta dos dados
        do {
            cout << "Informe o estado (XX): ";
            fflush(stdin);
            gets(funcionario[i].estado);
            if(strlen(funcionario[i].estado) != 2) {
                cout << "Erro: o estado informado deve estar em formato XX! Tente novamente.\n" << endl;
            }

        } while (strlen(funcionario[i].estado) != 2);

        // Fun��o para transformar o estado XX em mai�sculo
        strupr(funcionario[i].estado);

    }

    // Exibi��o do Resultado
    cout << "\nListagem dos funcion�rios(as) casados(as), residentes no MS e com sal�rio acima de R$3.000,00\n";

    for(i = 0; i < cad; i++) {
        if ((funcionario[i].e_civil == 2) && (strcmp(funcionario[i].estado, "MS") == 0) && (funcionario[i].salario > 3000)) {
            cout << endl << "Funcion�rio " << i+1 << " encontrado!\n" <<
                    "Nome: " << funcionario[i].nome << endl <<
                    "Sal�rio: R$" << fixed << setprecision(2) << funcionario[i].salario << endl <<
                    "Estado Civil: Casado(a)" << endl;
            if (funcionario[i].sexo == 1) {
                cout << "Sexo: Masculino" << endl;
            } else {
                cout << "Sexo: Feminino" << endl;
            }
            cout << "Cidade: " << strupr(funcionario[i].cidade) << endl <<
                    "Estado: " << strupr(funcionario[i].estado) << endl;

            // Atribuidor l�gico
            flag = 1;
        }
    }

    // Verifica��o l�gica
    if (flag == 1) {
        cout << "\nFim da Listagem!\n" << endl;
    } else {
        cout << "\nPoxa, que pena! Nenhum funcion�rio foi encontrado para a listagem :(\n" << endl;
    }

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para ler os dados (nome, sal�rio, estado civil, sexo, n�mero de dependentes, cidade
    e estado de resid�ncia) dos funcion�rios de uma empresa e mostrar uma listagem de todos os dados dos
    funcion�rios(as) CASADOS(AS), residentes no MS e com SAL�RIO acima de R$ 3.000,00. Cadastrar no m�ximo
    200 funcion�rios.
*/
