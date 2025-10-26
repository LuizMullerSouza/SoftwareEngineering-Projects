algoritmo "OrdenadorTresValores"

// Variáveis
var
   a, b, c, aux: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor de A: ")
   Leia(a)
   Escreva("Informe o valor de B: ")
   Leia(b)
   Escreva("Informe o valor de C: ")
   Leia(c)

   // Lógica condicional para ordenação
   se ((a = b) e (a = c)) entao
      Escreval("Os três valores são iguais!")
      Escreval("Valores: ", a, ", ", b, ", ", c)
   senao
      // Início da lógica de ordenação
      se ((a >= b) e (a >= c)) entao
         // A é o maior
         aux <- c
         c <- a
         a <- aux
         se (a > b) entao
            aux <- b
            b <- a
            a <- aux
         fimse
      senao
         se ((b >= a) e (b >= c)) entao
            // B é o maior
            aux <- c
            c <- b
            b <- aux
            se (a > b) entao
               aux <- b
               b <- a
               a <- aux
            fimse
         senao
            // C é o maior
            se (a > b) entao
               aux <- b
               b <- a
               a <- aux
            fimse
         fimse
      fimse
      // Saída de dados
      Escreval("Valores Ordenados: ", a, ", ", b, ", ", c)
   fimse

// Fim da execução
fimalgoritmo

// Desenvolva uma algoritmo em PORTUGOL que ordene
// em ordem crescente três valores ( A , B e C)
// inteiros fornecidos pelo usuário.