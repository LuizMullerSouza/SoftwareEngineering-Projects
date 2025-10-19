algoritmo "AntecessorSucessor"

// Variáveis
var
   numero, antecessor, sucessor: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um número: ")
   Leia(numero)

   // Processamento
   antecessor <- numero - 1
   sucessor <- numero + 1

   // Saída de dados
   Escreval("O antecessor de ", numero, " é: ", antecessor)
   Escreval("O sucessor de ", numero, " é: ", sucessor)

// Fim da execução
fimalgoritmo

// Faça um algoritmo que leia um número e exiba
// seu sucessor e seu antecessor.