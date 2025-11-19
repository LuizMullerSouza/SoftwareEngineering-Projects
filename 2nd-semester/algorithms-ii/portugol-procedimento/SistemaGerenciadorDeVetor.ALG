algoritmo "SistemaGerenciadorDeVetor"

// Variáveis
var
   opcao: caractere
   vet: vetor [1..30] de inteiro
   preenchido: logico
   i: inteiro

// Procedimento A para preencher o vetor
procedimento preencherVetor
var
   i: inteiro
inicio
   Escreval("--- Preenchendo o Vetor ---")
   
   para i <- 1 ate 30 passo 1 faca
      Escreva("Informe o ", i, "° valor: ")
      Leia(vet[i])
   fimpara
   
   Escreval
   Escreval("Vetor preenchido com sucesso!")
   
   preenchido <- verdadeiro
fimprocedimento

// Procedimento B para encontrar maior elemento
procedimento maiorElemento
var
   i, maior: inteiro
inicio
   se (preenchido = verdadeiro) entao
      maior <- vet[1]

      para i <- 1 ate 30 passo 1 faca
         se (vet[i] > maior) entao
            maior <- vet[i]
         fimse
      fimpara
      
      Escreval("Maior elemento no vetor: ", maior)
   senao
      Escreval("Erro: o vetor deve estar preenchido primeiro.")
   fimse
fimprocedimento

// Procedimento C para encontrar menor elemento
procedimento menorElemento
var
   i, menor: inteiro
inicio
   se (preenchido = verdadeiro) entao
      menor <- vet[1]

      para i <- 1 ate 30 passo 1 faca
         se (vet[i] < menor) entao
            menor <- vet[i]
         fimse
      fimpara
      Escreval("Menor elemento no vetor: ", menor)
   senao
      Escreval("Erro: o vetor deve estar preenchido primeiro.")
   fimse
fimprocedimento

// Procedimento D para somar elementos
procedimento somarElementos
var
   i, soma: inteiro
inicio
   se (preenchido = verdadeiro) entao
      soma <- 0
      para i <- 1 ate 30 passo 1 faca
         soma <- soma + vet[i]
      fimpara
      Escreval("Soma de todos os elementos: ", soma)
   senao
      Escreval("Erro: o vetor deve estar preenchido primeiro.")
   fimse
fimprocedimento

// Procedimento E para obter a média dos elementos
procedimento mediaElementos
var
   i, soma: inteiro
   media: real
inicio
   se (preenchido = verdadeiro) entao
      soma <- 0
      para i <- 1 ate 30 passo 1 faca
         soma <- soma + vet[i]
      fimpara
      media <- soma / 30
      Escreval("Média dos elementos: ", media:0:2)
   senao
      Escreval("Erro: o vetor deve estar preenchido primeiro.")
   fimse
fimprocedimento

// Procedimento F para escolher uma posição
procedimento escolherPosicao
var
   posicao: inteiro
inicio
   se (preenchido = verdadeiro) entao
      Escreva("Escolha uma posição (1 a 30): ")
      Leia(posicao)

      se ((posicao >= 1) e (posicao <= 30)) entao
         Escreval("Valor na Posição ", posicao, ": ", vet[posicao])
      senao
         Escreval("Erro: o valor inserido deve estar entre 1 e 30.")
      fimse
   senao
      Escreval("Erro: o vetor deve estar preenchido primeiro.")
   fimse
fimprocedimento

// Procedimento G para sair do algoritmo
procedimento sair
inicio
   Escreval("Saindo do Algoritmo...")
fimprocedimento

// Início
inicio
   preenchido <- falso

   // Menu de opções com entrada e leitura de opção
   repita
      Escreval
      Escreval("=== MENU DE OPÇÕES ===")
      Escreval("(A) - Preencher um vetor de inteiro com 30 posições")
      Escreval("(B) - Identificar o maior elemento do vetor")
      Escreval("(C) - Identificar o menor elemento do vetor")
      Escreval("(D) - Calcular a soma entre os elementos do vetor")
      Escreval("(E) - Calcular a média entre os elementos do vetor")
      Escreval("(F) - Escolher uma posição para verificar seu elemento")
      Escreval("(G) - Sair do algoritmo")
      Escreva("Informe sua opção: ")
      Leia(opcao)
      Escreval
      
      opcao <- Maiusc(opcao)

      // Lógica condicional para chamada do procedimento correto
      escolha opcao
         caso "A", "a"
            preencherVetor
         caso "B", "b"
            maiorElemento
         caso "C", "c"
            menorElemento
         caso "D", "d"
            somarElementos
         caso "E", "e"
            mediaElementos
         caso "F", "f"
            escolherPosicao
         caso "G", "g"
            sair
         outrocaso
            Escreval("Erro: opção inválida. Tente novamente.")
      fimescolha

   ate ((opcao = "G") ou (opcao = "g"))

// Fim da execução
fimalgoritmo

// Construa um algoritmo que irá possuir um menu com as opções
// de escolha a seguir. Para cada opção escreva um procedimento
// ou uma função apropriada.
// a) Preencha um vetor de inteiro com 30 posições
// b) Identifique o maior elemento do vetor e apresente-o;
// c) Identifique o menor valor do vetor e o apresente-o;
// d) Calcule a soma entre os elementos do vetor;
// e) Calcule a média entre os elementos do vetor
// f) Apresente o elemento de uma determinada posição indicada pelo usuário.
// g) Saia do algoritmo.