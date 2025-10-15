// Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Fun��o principal
int main() {

    // Fun��o para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Vari�veis
    char gender;
    float height, idealWeight;

    // T�tulo
    printf("CALCULADORA DE PESO IDEAL\n");

    // Entrada e leitura de dados
    printf("\nInforme o seu sexo (H para Homem ou M para Mulher): ");
    gender = getche();

    printf("\nInforme a sua altura (em metros): ");
    scanf("%f", &height);

    // L�gica condicional para o resultado
    if (gender == 'H' || gender == 'h') {
        idealWeight = (72.7 * height) - 58;
        printf("\nPara o sexo Masculino e altura de %.2fm, o peso ideal �: %.1f kg.\n", height, idealWeight);
    } else if (gender == 'M' || gender == 'm') {
        idealWeight = (62.1 * height) - 44.7;
        printf("\nPara o sexo Feminino e altura de %.2fm, o peso ideal �: %.1f kg.\n", height, idealWeight);
    } else {
        printf("\nOp��o de sexo inv�lida. Por favor, insira H ou M.\n");
    }

    // Executado com sucesso
    return 0;
}

/*
    Leia o sexo ('h' para homem e 'm' para mulher) e a altura de uma pessoa,
    calcule e mostre o seu peso ideal baseado na altura. Sabe-se que:
    a. Para homens: peso ideal = (72.7 * altura) - 58
    b. Para mulheres: peso ideal = (62.1 * altura) - 44.7
*/
