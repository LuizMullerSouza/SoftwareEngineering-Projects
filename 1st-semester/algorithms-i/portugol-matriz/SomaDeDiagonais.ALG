algoritmo "SomaDeDiagonais"

// Variáveis
var
   mat: vetor [1..5, 1..5] de inteiro
   somaDiagPrincipal, somaDiagSecundaria, i, j: inteiro

// Início
inicio
   // Inicialização
   somaDiagPrincipal <- 0
   somaDiagSecundaria <- 0

   // Loop para entrada, leitura de dados e soma das diagonais
   Escreval("--- Preenchimento da Matriz 5x5 ---")
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         Escreva("Digite valor da Linha ", i, ", Coluna ", j, ": ")
         Leia(mat[i,j])

         // Diagonal Principal
         se (i = j) entao
            somaDiagPrincipal <- somaDiagPrincipal + mat[i,j]
         fimse

         // Diagonal Secundária
         se (i + j = 6) entao
            somaDiagSecundaria <- somaDiagSecundaria + mat[i,j]
         fimse

      fimpara
   fimpara
   Escreval
   Escreval("Matriz preenchida e calculada com sucesso!")
   Escreval
   Escreval("Soma da Diagonal Principal: ", somaDiagPrincipal)
   Escreval("Soma da Diagonal Secundária: ", somaDiagSecundaria)

// Fim da execução
fimalgoritmo

// Elaborar um algoritmo que lê uma matriz 5x5 e calcule a soma da:
// a) Diagonal Principal;
// b) Diagonal Secundária;