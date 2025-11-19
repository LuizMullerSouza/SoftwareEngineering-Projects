algoritmo "TrocarValoresReferencia"

// Variáveis
var
   n1, n2: inteiro
   verificador: logico

// Função
funcao trocar (var x1, x2: inteiro): logico
var
   aux: inteiro
inicio
   // Lógica de troca
   aux <- x1
   x1 <- x2
   x2 <- aux

   retorne verdadeiro
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o primeiro valor: ")
   Leia(n1)
   Escreva("Informe o segundo valor: ")
   Leia(n2)
   Escreval

   // Chamada da função
   verificador <- trocar(n1, n2)

   // Saída de dados
   se (verificador = verdadeiro) entao
      Escreval("Os valores trocados ficam: ", n1, " e ", n2)
   senao
      Escreval("Houve um erro ao processar o Algoritmo.")
   fimse

// Fim da execução
fimalgoritmo

// Crie uma função chamada trocar que receba duas variáveis
// inteiras por referência e troque os valores entre elas. No
// programa principal, leia dois números, chame a função e
// mostre os valores após a troca.