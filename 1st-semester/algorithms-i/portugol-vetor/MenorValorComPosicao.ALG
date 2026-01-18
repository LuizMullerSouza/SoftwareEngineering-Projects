algoritmo "MenorValorComPosicao"

// Variáveis
var
   n: vetor [1..20] de inteiro
   m, p, i: inteiro

// Início
inicio
   Escreval("--- Preenchendo Vetor N ---")

   // Loop para entrada, leitura de dados e encontro do menor valor
   para i <- 1 ate 20 passo 1 faca
      Escreva("Digite o ", i, "º valor: ")
      Leia(n[i])

      // Lógica condicional para encontrar o menor valor e sua posição
      se (i = 1) entao
         m <- n[i]
         p <- i
      senao
         se (n[i] < m) entao
            m <- n[i]
            p <- i
         fimse
      fimse
   fimpara

   Escreval

   // Saída de dados
   Escreval("O menor elemento de N é ", m, " e sua posição dentro do vetor é: ", p)

// Fim da execução
fimalgoritmo

// Faça um algoritmo em PORTUGOL que leia um vetor N[20]. A seguir, encontre
// o menor elemento do vetor N e a sua posição dentro do vetor, mostrando: “O
// menor elemento de N é”, M, “e sua posição dentro do vetor é:”, P.