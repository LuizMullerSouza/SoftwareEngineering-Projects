// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    int hours, minutes, seconds, totalSeconds;

    // T�tulo
    printf("CONVERSOR DE TEMPO PARA SEGUNDOS\n");

    // Entrada e leitura de dados
    printf("\nInforme as horas: ");
    scanf("%d", &hours);

    printf("Informe os minutos: ");
    scanf("%d", &minutes);

    printf("Informe os segundos: ");
    scanf("%d", &seconds);

    // C�lculo
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    // Resultado
    printf("\n%d horas, %d minutos e %d segundos correspondem a %d segundos no total desde o in�cio do dia.\n", hours, minutes, seconds, totalSeconds);

    // Executado com sucesso
    return 0;
}

/*
    Leia um valor de horas, minutos e segundos e calcule e mostre quantos segundos se passaram desde o in�cio do dia.
*/
