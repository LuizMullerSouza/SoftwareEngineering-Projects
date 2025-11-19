algoritmo "DobrarValorReferencia"

// Variáveis
var
   n: inteiro
   verificador: logico

// Função
funcao dobrar (var x: inteiro): logico
inicio
   x <- x * 2
   
   retorne verdadeiro
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um valor: ")
   Leia(n)
   Escreval

   // Chamada da função
   verificador <- dobrar(n)

   // Saída de dados
   se (verificador = verdadeiro) entao
      Escreval("O dobro do seu valor é: ", n)
   senao
      Escreval("Houve um erro ao processar o Algoritmo.")
   fimse

// Fim da execução
fimalgoritmo

// Crie uma função chamada dobrar que receba um número
// inteiro por referência e dobre o seu valor. No programa
// principal, leia um número, chame a função e exiba o resultado.