algoritmo "CalculadoraProcedural"

// Variáveis
var
   n1, n2: real
   verificador: inteiro

// Procedimento para soma
procedimento somar (x, y: real)
var
   resultado: real
inicio
   // Processamento
   resultado <- x + y

   // Saída de dados
   Escreval(x, " + ", y, " = ", resultado)
fimprocedimento

// Procedimento para subtração
procedimento subtrair (x, y: real)
var
   resultado: real
inicio
   // Processamento
   resultado <- x - y

   // Saída de dados
   Escreval(x, " - ", y, " = ", resultado)
fimprocedimento

// Procedimento para multiplicação
procedimento multiplicar (x, y: real)
var
   resultado: real
inicio
   // Processamento
   resultado <- x * y

   // Saída de dados
   Escreval(x, " x ", y, " = ", resultado)
fimprocedimento

// Procedimento para divisão
procedimento dividir (x, y: real)
var
   resultado: real
inicio
   // Lógica condicional para validação
   se (y <> 0) entao
      resultado <- x / y
      Escreval(x, " / ", y, " = ", resultado:0:2)
   senao
      Escreval("Divisão por 0 é inválido!")
   fimse
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o primeiro valor: ")
   Leia(n1)
   Escreva("Informe o segundo valor: ")
   Leia(n2)

   Escreval
   Escreval("1 - Adição | 2 - Subtração")
   Escreval("3 - Multiplicação | 4 - Divisão")
   Escreva("Escolha uma opção de 1 a 4: ")
   Leia(verificador)
   Escreval

   // Lógica condicional para chamada da função
   escolha verificador
      caso 1
         somar(n1, n2)
      caso 2
         subtrair(n1, n2)
      caso 3
         multiplicar(n1, n2)
      caso 4
         dividir(n1, n2)
      outrocaso
         Escreval("Erro: opção inválida!")
   fimescolha

// Fim da execução
fimalgoritmo

// Crie um algoritmo que irá possuir 4 procedimentos, operações
// básicas de uma calculadora, o procedimento irá receber 2 valores
// reais para realizar a operação.  No corpo principal será lido 2
// valores reais e o usuário irá solicitar se irá somar, subtrair,
// dividir ou multiplicar.