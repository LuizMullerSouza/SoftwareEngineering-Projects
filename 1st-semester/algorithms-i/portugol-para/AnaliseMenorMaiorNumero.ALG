algoritmo "AnaliseMenorMaiorNumero"

// Variáveis
var
   numero, menor, maior, i: inteiro

// Início
inicio
   // Loop para processamento
   para i <- 1 ate 10 passo 1 faca
      Escreva("Digite o ", i, "° número inteiro: ")
      Leia(numero)

      // Lógica condicional
      se (i = 1) entao
         menor <- numero
         maior <- numero
      senao
         se (numero < menor) entao
            menor <- numero
         fimse
         se (numero > maior) entao
            maior <- numero
         fimse
      fimse
   fimpara

   Escreval

   // Saída de dados
   Escreval("Menor número digitado: ", menor)
   Escreval("Maior número digitado: ", maior)

// Fim da execução
fimalgoritmo

// Criar um algoritmo em PORTUGOL que leia dez números
// inteiros e imprima o maior e o menor número da lista.