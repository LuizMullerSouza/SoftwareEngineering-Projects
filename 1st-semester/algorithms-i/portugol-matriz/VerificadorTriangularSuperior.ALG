algoritmo "VerificadorTriangularSuperior"

// Variáveis
var
   mat: vetor [1..5, 1..5] de inteiro
   i, j, verificador: inteiro

// Início
inicio
   // Inicialização
   verificador <- 0

   Escreval("--- Preenchendo a Matriz 5x5 ---")

   // Loop para entrada, leitura de dados e verificação
   para i <- 1 ate 5 passo 1 faca
      para j <- 1 ate 5 passo 1 faca
         Escreva("[", i, ", ", j, "] = ")
         Leia(mat[i,j])

         // Lógica condicional para abaixo da diagonal principal
         se (i > j) entao
            se (mat[i,j] <> 0) entao
               verificador <- verificador + 1
            fimse
         fimse

      fimpara
   fimpara

   Escreval
   Escreval("Matriz preenchida com sucesso!")
   Escreval("Verificando se a Matriz é triangular superior...")
   Escreval

   // Lógica condicional para saída de dados
   se (verificador = 0) entao
      Escreval("A Matriz É triangular superior!")
   senao
      Escreval("A Matriz NÃO É triangular superior!")
      Escreval("Foram encontrados ", verificador, " valores não-nulos abaixo da diagonal principal.")
   fimse

// Fim da execução
fimalgoritmo

// Crie um algoritmo que verifique se uma matriz é triangular
// superior. Uma matriz é triangular superior se todos os elementos
// abaixo da diagonal principal são iguais a 0.