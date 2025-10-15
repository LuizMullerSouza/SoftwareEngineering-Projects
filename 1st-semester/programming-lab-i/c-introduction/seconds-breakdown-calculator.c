// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int totalSecondsInput, hours, minutes, seconds;

    // Título
    printf("CONVERSOR DE SEGUNDOS PARA HORAS, MINUTOS E SEGUNDOS\n");

    // Entrada e leitura de dados
    printf("\nInforme o valor total em segundos: ");
    scanf("%d", &totalSecondsInput);

    // Cálculo
    hours = totalSecondsInput / 3600;
    minutes = (totalSecondsInput % 3600) / 60;
    seconds = totalSecondsInput % 60;

    // Resultado
    printf("\n%d segundos correspondem a %d horas, %d minutos e %d segundos.\n", totalSecondsInput, hours, minutes, seconds);

    // Executado com sucesso
    return 0;
}

/*
    Leia um valor em segundos e calcule e mostre o valor correspondente em horas,
    minutos e segundos.
*/
