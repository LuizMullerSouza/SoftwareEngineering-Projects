// Bibliotecas
#include <iostream>
#include <locale.h>

// Importação de ferramentas
using namespace std;

// Protótipo da função
int calculateGameDuration(int startHour, int startMinute, int endHour, int endMinute);

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int startHour, startMinute, endHour, endMinute, totalDurationMinutes;

    // Título
    cout << "CONVERSOR DE TEMPO DE JOGO EM MINUTOS\n" << endl;

    cout << "=== Início do Jogo ===\n" << endl;

    // Entrada e leitura de dados
    do {
        cout << "Digite as horas iniciais do jogo: ";
        cin >> startHour;
        if(startHour < 0 || startHour > 23){
            cout << "O valor das horas deve seguir o formato entre 0 e 23. Tente novamente.\n" << endl;
        }
    } while(startHour < 0 || startHour > 23);

    do {
        cout << "Digite os minutos iniciais do jogo: ";
        cin >> startMinute;
        if(startMinute < 0 || startMinute > 59){
            cout << "O valor dos minutos deve seguir o formato entre 0 e 59. Tente novamente.\n" << endl;
        }
    } while(startMinute < 0 || startMinute > 59);

    cout << "\n=== Final do Jogo ===\n" << endl;

    do {
        cout << "Digite as horas finais do jogo: ";
        cin >> endHour;
        if(endHour < 0 || endHour > 23){
            cout << "O valor das horas deve seguir o formato entre 0 e 23. Tente novamente.\n" << endl;
        }
    } while(endHour < 0 || endHour > 23);

    do {
        cout << "Digite os minutos finais do jogo: ";
        cin >> endMinute;
        if(endMinute < 0 || endMinute > 59){
            cout << "O valor dos minutos deve seguir o formato entre 0 e 59. Tente novamente.\n" << endl;
        }
    } while(endMinute < 0 || endMinute > 59);

    // Chamada da função
    totalDurationMinutes = calculateGameDuration(startHour, startMinute, endHour, endMinute);

    // Exibição do resultado
    cout << "\nDuração do Jogo em Minutos = " << totalDurationMinutes << " minutos" << endl;

    // Executado com sucesso
    return 0;
}

// Função que calcula a duração do jogo em minutos
int calculateGameDuration(int startHour, int startMinute, int endHour, int endMinute){

    // Variáveis locais
    int totalMinutesStart, totalMinutesEnd, result;

    // Cálculo
    totalMinutesStart = (startHour * 60) + startMinute;
    totalMinutesEnd = (endHour * 60) + endMinute;

    result = totalMinutesEnd - totalMinutesStart;

    if (result <= 0){
        result += 1440;
    }

    // Retorno da duração do jogo
    return result;
}

/*
    Faça um programa contendo uma função que receba como parâmetro a hora de
    início e a hora de término de um jogo, ambas subdivididas em dois valores
    distintos: horas e minutos. A função deverá retornar a duração expressa em
    minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas
    e que ele pode começar em um dia e terminar no outro.
*/
