algoritmo "ContadorIntervalo"

// Variáveis
var
   numero, cont: inteiro

// Início
inicio
   cont <- 0

   // Loop de leitura
   repita
      // Entrada e leitura de dados
      Escreva("Informe um número (0 para sair): ")
      Leia(numero)

      // Processamento
      se (numero <> 0) entao
         se ((numero >= 100) e (numero <= 200)) entao
            cont <- cont + 1
         fimse
      senao
         Escreval("Saindo do algoritmo!")
      fimse
   ate (numero = 0)

   // Saída de dados
   se (cont > 0) entao
      Escreval(cont, " números digitados estavam entre os valores 100 e 200")
   senao
      Escreval("Nenhum número digitado estava entre os valores 100 e 200")
   fimse

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que leia números e imprima no final
// quantos números entre 100 e 200 foram digitados. Quando
// o valor 0 (zero) for lido, o algoritmo deve parar a sua execução.