// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constante
#define MAX_CANDIDATES 10

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int candidateVotes[MAX_CANDIDATES] = {0}, voteInput, electedId = 0, i;

    // Título
    printf("SISTEMA DE APURAÇÃO ELEITORAL\n");

    // Loop para a votação
    do {

        printf("\nInforme o código do candidato: ");
        scanf("%d", &voteInput);

        // Validação e contagem do voto
        if (voteInput >= 0 && voteInput < MAX_CANDIDATES) {
            candidateVotes[voteInput]++;
            printf("Sucesso: voto confirmado com êxito!\n");
        } else if (voteInput >= MAX_CANDIDATES) {
            printf("Erro: os códigos dos candidatos percorrem de 0 a 9! Tente novamente\n");
        } else {
            printf("\nVotação encerrada pelo operador!\n\n");
        }

    } while (voteInput >= 0);

    printf("-- RESULTADO DAS ELEIÇÕES --\n\n");

    // Loop para apuração dos votos
    for (i = 0; i < MAX_CANDIDATES; i++) {

        if (candidateVotes[i] == 0) {
            printf("Candidato %d - Nenhum Voto\n", i);
        } else if (candidateVotes[i] == 1) {
            printf("Candidato %d - 1 Voto\n", i);
        } else {
            printf("Candidato %d - %d Votos\n", i, candidateVotes[i]);
        }

        // Lógica condicional para o ganhador das eleições
        if (i == 0) {
            electedId = i;
        } else {
            if (candidateVotes[i] > candidateVotes[electedId]) {
                electedId = i;
            }
        }
    }

    // Resultado final
    printf("\nO candidato %d foi ELEITO.\n", electedId);

    // Executado com sucesso
    return 0;
}

/*
    Devido às confusões dos programadores do TRE, a Justiça Eleitoral resolveu
    contratá-lo para realizar a apuração das eleições. Faça um programa que leia
    o código dos candidatos e informe o número de votos recebidos por cada um, bem
    como o candidato mais votado. Você sabe que 10 candidatos disputam uma vaga. E
    que a entrada termina assim que for lido um candidato de código negativo. Exemplo:
    Entrada: 0 0 1 2 0 2 -1 Saída: 0 - 3 Votos 1 - 1 Voto 2 - 2 Votos. O candidato 0
    foi eleito. Suponha-se que o usuário digitará uma quantidade de votos que não
    resultará empate no processamento de lógica final.
*/
