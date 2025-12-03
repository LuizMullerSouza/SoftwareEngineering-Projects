// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
void convertTimeToSeconds(int hours, int minutes, int seconds);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int hours, minutes, seconds;

    // Título
    cout << "CONVERSOR DE HORAS, MINUTOS E SEGUNDOS\n" << endl;

    // Entrada e leitura de dados
    cout << "Informe o valor inteiro de horas: ";
    cin >> hours;

    cout << "Informe o valor inteiro de minutos: ";
    cin >> minutes;

    cout << "Informe o valor inteiro de segundos: ";
    cin >> seconds;

    // Chamada da função
    convertTimeToSeconds(hours, minutes, seconds);

    // Executado com sucesso
    return 0;
}

// Função que converte o horário para segundos e exibe o resultado
void convertTimeToSeconds(int hours, int minutes, int seconds) {

    // Variável local
    int totalSeconds;

    // Cálculo
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    // Lógica condicional para resultado
    if (minutes < 10) {
        cout << endl << hours << ":0" << minutes << ":" << seconds << " = " << totalSeconds << " segundos" << endl;
    } else {
        cout << endl << hours << ":" << minutes << ":" << seconds << " = " << totalSeconds << " segundos" << endl;
    }
}

/*
    Faça um programa contendo uma função para receber, por parâmetro, três valores inteiros representando um horário
    expresso em horas, minutos e segundos. A função deverá então converter e mostrar o horário (horas, minutos e
    segundos) para apenas segundos.
*/
