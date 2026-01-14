algoritmo "GeradorNesimoTermoRicci"

// Variáveis
var
   termo1, termo2, nesimo, i, proximo, aux, soma: inteiro

// Início
inicio
   // Inicialização
   soma <- 0

   // Entrada e leitura de dados
   Escreva("Digite o primeiro termo: ")
   Leia(termo1)
   Escreva("Digite o segundo termo: ")
   Leia(termo2)

   // Lógica condicional para ordenação
   se (termo2 < termo1) entao
      aux <- termo2
      termo2 <- termo1
      termo1 <- aux
   fimse

   Escreval

   // Loop com validação
   repita
      Escreva("Digite o N-ésimo termo (mínimo 3): ")
      Leia(nesimo)

      se (nesimo < 3) entao
         Escreval("Erro: Mínimo de 3 termos necessários. Tente novamente.")
         Escreval
      fimse
   ate (nesimo >= 3)

   Escreval
   Escreva("Sequência: ")

   // Loop para calcular a sequência de Ricci
   para i <- 1 ate nesimo passo 1 faca
      Escreva(termo1, " ")

      soma <- soma + termo1

      proximo <- termo1 + termo2
      termo1 <- termo2
      termo2 <- proximo
   fimpara

   Escreval
   Escreval

   // Saída de dados
   Escreval("Soma dos termos impressos: ", soma)

// Fim da execução
fimalgoritmo

// A série de RICCI difere da série de FIBONACCI porque os dois primeiros
// termos são fornecidos pelo usuário. Criar um algoritmo em PORTUGOL que
// imprima os N primeiros termos da série de RICCI e a soma dos termos impressos.