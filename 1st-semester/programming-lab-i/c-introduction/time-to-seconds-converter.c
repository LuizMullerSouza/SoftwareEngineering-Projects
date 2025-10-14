// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int hours, minutes, seconds, totalSeconds;

    // Título
    printf("CONVERSOR DE TEMPO PARA SEGUNDOS\n");

    // Entrada e leitura de dados
    printf("\nInforme as horas: ");
    scanf("%d", &hours);

    printf("Informe os minutos: ");
    scanf("%d", &minutes);

    printf("Informe os segundos: ");
    scanf("%d", &seconds);

    // Cálculo
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    // Resultado
    printf("\n%d horas, %d minutos e %d segundos correspondem a %d segundos no total desde o início do dia.\n", hours, minutes, seconds, totalSeconds);

    // Executado com sucesso
    return 0;
}

/*
    Leia um valor de horas, minutos e segundos e calcule e mostre quantos segundos se passaram desde o início do dia.
*/
