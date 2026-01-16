algoritmo "ProdutoEscalarVetor"

// Variáveis
var
   s, produto: vetor [1..20] de inteiro
   a, i: inteiro

// Início
inicio
   Escreval("--- Preenchendo o Vetor S ---")

   // Loop para entrada e leitura de dados
   para i <- 1 ate 20 passo 1 faca
      Escreva("Digite o ", i, "° número: ")
      Leia(s[i])
   fimpara

   Escreval
   Escreva("Digite o valor da variável A (multiplicador): ")
   Leia(a)

   Escreval
   Escreval("--- Produto de A pelos elementos do vetor ---")

   // Loop para cálculo e exibição do resultado
   para i <- 1 ate 20 passo 1 faca
      produto[i] <- s[i] * a
      Escreval(a, " x ", s[i], " = ", produto[i])
   fimpara

// Fim da execução
fimalgoritmo

// Faça um algoritmo em PORTUGOL que leia um vetor S[20] e uma
// variável A. A seguir, mostre o produto da variável A pelos
// elementos do vetor.