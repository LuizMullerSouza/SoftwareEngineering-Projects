// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int option, candidate1 = 0, candidate2 = 0, candidate3 = 0, blankVotes = 0, nullVotes = 0, totalVotes = 0;
    float invalidPercentage = 0.0;

    printf("SISTEMA DE APURAÇÃO DE ELEIÇÕES\n\n");

    // Menu de opções
    printf("====== URNA ELETRÔNICA ======\n");
    printf("Candidato 1 - Dígito 1\n");
    printf("Candidato 2 - Dígito 2\n");
    printf("Candidato 3 - Dígito 3\n");
    printf("Voto em Branco - Dígito 4\n");
    printf("Voto Nulo - Dígito 5\n");
    printf("Encerrar Apuração - Dígito 0\n");
    printf("=============================");

    // Loop principal para ler e apurar os votos
    do {
        printf("\n\nInforme seu voto: ");
        scanf("%d", &option);

        // Incremento do voto ou saída
        switch (option) {
            case 1:
                candidate1++;
                printf(">> Voto confirmado - Candidato 1");
                break;
            case 2:
                candidate2++;
                printf(">> Voto confirmado - Candidato 2");
                break;
            case 3:
                candidate3++;
                printf(">> Voto confirmado - Candidato 3");
                break;
            case 4:
                blankVotes++;
                printf(">> Voto confirmado - Em Branco");
                break;
            case 5:
                nullVotes++;
                printf(">> Voto confirmado - Nulo");
                break;
            case 0:
                printf("\nEncerrando votação e calculando resultados...\n");
                break;
            default:
                printf(">> ERRO: Opção inválida! Tente novamente.");
        }

    } while (option != 0);

    // Cálculo percentual dos votos brancos e nulos
    totalVotes = candidate1 + candidate2 + candidate3 + blankVotes + nullVotes;

    if (totalVotes > 0) {
        invalidPercentage = ((float)(blankVotes + nullVotes) / totalVotes) * 100;
    }

    // Exibição dos resultados
    printf("\n=== RESULTADO FINAL DA APURAÇÃO ===\n");
    printf("Total de Votos: %d\n", totalVotes);
    printf("-----------------------------------\n");
    printf("Candidato 1:  %d votos\n", candidate1);
    printf("Candidato 2:  %d votos\n", candidate2);
    printf("Candidato 3:  %d votos\n", candidate3);
    printf("-----------------------------------\n");
    printf("Votos em Branco:  %d votos\n", blankVotes);
    printf("Votos Nulos:  %d votos\n", nullVotes);
    printf("Percentual de votos brancos e nulos: %.2f%%\n", invalidPercentage);

    return 0;
}

/*
    Construa um programa que apure uma eleição com três candidatos. O programa deve
    realizar as seguintes tarefas:
    a) Calcular o total de votos para cada candidato;
    b) Calcular a quantidade de votos nulos;
    c) Calcular a quantidade de votos em branco;
    d) Calcular o percentual de votos em branco e nulos em relação ao total.
    A votação deve obedecer as seguintes convenções:
    a) 1,2,3 => votos dos candidatos
    b) 4 => votos em branco
    c) 5 => votos nulos
    d) 0 => encerramento da apuração
*/
