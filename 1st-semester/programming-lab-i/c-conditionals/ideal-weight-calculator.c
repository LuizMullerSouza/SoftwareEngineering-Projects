// Bibliotecas
#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Função principal
int main() {

    // Função para idiomas
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    char gender;
    float height, idealWeight;

    // Título
    printf("CALCULADORA DE PESO IDEAL\n");

    // Entrada e leitura de dados
    printf("\nInforme o seu sexo (H para Homem ou M para Mulher): ");
    gender = getche();

    printf("\nInforme a sua altura (em metros): ");
    scanf("%f", &height);

    // Lógica condicional para o resultado
    if (gender == 'H' || gender == 'h') {
        idealWeight = (72.7 * height) - 58;
        printf("\nPara o sexo Masculino e altura de %.2fm, o peso ideal é: %.1f kg.\n", height, idealWeight);
    } else if (gender == 'M' || gender == 'm') {
        idealWeight = (62.1 * height) - 44.7;
        printf("\nPara o sexo Feminino e altura de %.2fm, o peso ideal é: %.1f kg.\n", height, idealWeight);
    } else {
        printf("\nOpção de sexo inválida. Por favor, insira H ou M.\n");
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
