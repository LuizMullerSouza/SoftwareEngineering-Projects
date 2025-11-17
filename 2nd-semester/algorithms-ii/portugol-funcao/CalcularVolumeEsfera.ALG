algoritmo "CalcularVolumeEsfera"

// Variáveis
var
   raioEsfera, volumeCalculado: real

// Função
funcao calcularVolume (raio: real): real
var
   volume: real
inicio
   // Cálculo do volume
   volume <- (4.0 / 3.0) * 3.14 * (raio ^ 3)

   // Retorno do volume
   retorne volume
fimfuncao

// Início
inicio
   // Entrada de dados
   Escreva("Digite o raio da esfera: ")
   Leia(raioEsfera)

   // Chamada da função
   volumeCalculado <- calcularVolume(raioEsfera)

   // Saída de dados
   Escreval("O volume da esfera é: ", volumeCalculado)

// Fim da execução
fimalgoritmo

// Faça uma função que recebe por parâmetro o raio
// de uma esfera e calcula o seu volume (v = 4/3*P *R³).