// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int i, rollResult, countSide1 = 0, countSide2 = 0, countSide3 = 0, countSide4 = 0, countSide5 = 0, countSide6 = 0;

    // Título
    printf("VERIFICADOR DE DADOS VICIADOS DE CASSINOS\n\n");

    printf("Lançando o dado 15 vezes...\n\n");

    // Loop para leitura dos 15 lançamentos
    for (i = 1; i <= 15; i++) {

        // Entrada de dados com validação
        do {
            printf("Informe o resultado do %dº lançamento: ", i);
            scanf("%d", &rollResult);

            if (rollResult < 1 || rollResult > 6) {
                printf(">> Erro: o dado só tem faces de 1 a 6! Tente novamente.\n\n");
            }
        } while (rollResult < 1 || rollResult > 6);

        // Contagem de cada lado
        switch (rollResult) {
            case 1:
                countSide1++;
                break;
            case 2:
                countSide2++;
                break;
            case 3:
                countSide3++;
                break;
            case 4:
                countSide4++;
                break;
            case 5:
                countSide5++;
                break;
            case 6:
                countSide6++;
                break;
        }
    }

    // Exibição dos resultados
    printf("\n--------------------------------------");
    printf("\nRELATÓRIO DE OCORRÊNCIAS POR FACE");
    printf("\n--------------------------------------\n");
    printf("Face 1: %d vez(es)\n", countSide1);
    printf("Face 2: %d vez(es)\n", countSide2);
    printf("Face 3: %d vez(es)\n", countSide3);
    printf("Face 4: %d vez(es)\n", countSide4);
    printf("Face 5: %d vez(es)\n", countSide5);
    printf("Face 6: %d vez(es)\n", countSide6);
    printf("--------------------------------------\n");

    // Executado com sucesso
    return 0;
}

/*
    Tentando descobrir se um dado era viciado, um dono de cassino o lançou 15 vezes. Faça
    um programa que leia os 15 resultados e calcule o número de ocorrências de cada face.
*/
