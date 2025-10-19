algoritmo "VolumeEsfera"

// Variáveis
var
   volume, raio: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor do raio da esfera: ")
   Leia(raio)

   // Processamento
   volume <- (4 * Pi * raio ^ 3) / 3

   // Saída de dados
   Escreval("O volume da esfera é: ", volume:0:2, " unidades cúbicas")

// Fim da execução
fimalgoritmo

// Desenvolva um algoritmo que calcule o volume de uma esfera de
// raio R, fornecido pelo usuário.  Fórmula  V = (4pR^3)/3.