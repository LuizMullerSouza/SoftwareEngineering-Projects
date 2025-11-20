algoritmo "SomaFracoesRecursiva"

// Variáveis
var
   numero: inteiro
   resultado: real

// Função recursiva
funcao somarFracoes (n: inteiro): real
inicio
   // Caso base
   se (n <= 0) entao
      retorne 0
   senao
      // Chamada recursiva
      retorne (1.0 / n) + somarFracoes(n - 1)
   fimse
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor de n: ")
   Leia(numero)
   Escreval

   // Verificação lógica
   se (numero < 1) entao
      Escreval("Por favor, informe um número maior ou igual a 1.")
   senao
      // Chamada da função
      resultado <- somarFracoes(numero)

      // Saída de dados
      Escreval("A soma das frações de 1/1 até 1/", numero, " é: ", resultado:0:4)
   fimse

// Fim da execução
fimalgoritmo

// Desenvolva uma função usando recursividade para
// realizar o seguinte cálculo: 1/1 + 1/2 + 1/3 ... + 1/n