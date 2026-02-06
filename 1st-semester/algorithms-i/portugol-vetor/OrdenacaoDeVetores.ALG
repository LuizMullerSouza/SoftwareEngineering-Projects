algoritmo "OrdenacaoDeVetores"

// Variáveis
var
   vet1, vet2: vetor [1..10] de inteiro
   s: vetor [1..20] de inteiro
   aux, i, j: inteiro

// Início
inicio

   // Loop para ler o vetor 1 com cópia para S
   Escreval("--- Preenchendo o Vetor 1 ---")
   para i <- 1 ate 10 passo 1 faca
      Escreva("Digite o ", i, "º número: ")
      Leia(vet1[i])
      s[i] <- vet1[i]
   fimpara
   Escreval("Vetor 1 preenchido com sucesso!")

   Escreval
   
   // Loop para ler o vetor 2 com cópia para S
   Escreval("--- Preenchendo o Vetor 2 ---")
   para i <- 1 ate 10 passo 1 faca
      Escreva("Digite o ", i, "º número: ")
      Leia(vet2[i])
      s[i+10] <- vet2[i]
   fimpara
   Escreval("Vetor 2 preenchido com sucesso!")

   Escreval
   
   Escreval("Ordenando Vetor S...")

   // Loop para realizar a ordenação do vetor
   para i <- 1 ate 19 passo 1 faca
      para j <- i + 1 ate 20 passo 1 faca

         se (s[i] > s[j]) entao
            aux <- s[i]
            s[i] <- s[j]
            s[j] <- aux
         fimse

      fimpara
   fimpara

   Escreval("Vetor S ordenado com sucesso!")
   Escreval
   Escreval("--- Listagem do Vetor S ---")

   // Loop para saída de dados
   para i <- 1 ate 20 passo 1 faca
      Escreva(s[i], " ")
   fimpara
   Escreval

// Fim da execução
fimalgoritmo

// Escrever um algoritmo em PORTUGOL que lê 2 vetores de
// tamanho 10.  Crie, a seguir, um vetor S de 20 posições
// que contenha os elementos dos outros 2 vetores em ordem
// crescente. Obs.: copie primeiro os valores para o vetor
// S para depois ordená-lo.