algoritmo "CalcularPotencia"

// Variáveis
var
   base, expoente, resultado: inteiro

// Função recursiva
funcao elevar (b, ex: inteiro): inteiro
inicio
   // Validação lógica
   se (ex < 0) entao
      retorne 0
   senao
      // Caso base
      se (ex = 0) entao
         retorne 1
      senao
         // Chamada recursiva
         retorne b * elevar(b, ex - 1)
      fimse
   fimse
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe a base: ")
   Leia(base)
   Escreva("Informe o expoente: ")
   Leia(expoente)
   Escreval

   // Chamada da função
   resultado <- elevar(base, expoente)

   // Saída de dados
   se (resultado = 0) e (expoente < 0) entao
      Escreval(expoente, " não é válido como expoente!")
   senao
      Escreval(base, " elevado a ", expoente, " é igual a: ", resultado)
   fimse

// Fim da execução
fimalgoritmo

// Faça uma função recursiva para calcular um número
// inteiro qualquer elevado a outro numero inteiro qualquer.