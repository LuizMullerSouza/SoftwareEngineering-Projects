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
    int anos;
    float salario, reajuste;

    cout << "CALCULADOR DE SAL�RIOS\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe a quantos anos voc� trabalha na empresa: ";
    cin >> anos;
    cout << "Informe o valor do seu sal�rio: R$";
    cin >> salario;

    // Condi��o de para reajuste de sal�rio
    if (anos < 10) {
        reajuste = salario * 1.08;
    } else {
        reajuste = salario * 1.1;
    }

    // Resultado
    cout << "\nSal�rio reajustado: R$" << fixed << setprecision(2) << reajuste << endl;

    // Executado com sucesso
    return 0;
}

/*
    Fa�a um programa para ler o tempo de servi�o e o sal�rio de um funcion�rio e, em seguida,
    calcular e mostrar um reajuste salarial de acordo com a seguinte situa��o: se o funcion�rio
    possui tempo de servi�o inferior a 10 anos, o reajuste ser� de 8%, caso contr�rio, o reajuste
    salarial ser� de 10%.
*/
