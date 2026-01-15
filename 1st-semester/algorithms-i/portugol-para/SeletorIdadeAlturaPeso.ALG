algoritmo "SeletorIdadeAlturaPeso"

// Variáveis
var
   idade, i, idadeSup50, contMediaAltura: inteiro
   altura, peso, mediaAltura, pesoInf40: real

// Início
inicio
   // Inicialização
   idadeSup50 <- 0
   mediaAltura <- 0
   contMediaAltura <- 0
   pesoInf40 <- 0

   // Loop para entrada, leitura e processamento de dados
   para i <- 1 ate 25 passo 1 faca
      Escreval("--- Pessoa ", i, " ---")
      Escreva("Informe a idade: ")
      Leia(idade)
      Escreva("Informe a altura: ")
      Leia(altura)
      Escreva("Informe o peso: ")
      Leia(peso)

      // Contador de idades superior a 50
      se (idade > 50) entao
         idadeSup50 <- idadeSup50 + 1
      fimse

      // Contador de alturas entre 10 e 20 anos
      se (idade >= 10) e (idade <= 20) entao
         mediaAltura <- mediaAltura + altura
         contMediaAltura <- contMediaAltura + 1
      fimse

      // Contador de pesos menor que 40 quilos
      se (peso < 40) entao
         pesoInf40 <- pesoInf40 + 1
      fimse

      Escreval
   fimpara

   // Cálculos finais
   se (contMediaAltura > 0) entao
      mediaAltura <- mediaAltura / contMediaAltura
   senao
      mediaAltura <- 0
   fimse

   // Cálculo da porcentagem
   pesoInf40 <- (pesoInf40 * 100) / 25

   // Saída de dados
   Escreval("---------------- RESULTADOS ----------------")
   Escreval("Quantidade de pessoas com idade superior a 50 anos: ", idadeSup50)
   Escreval("Média da altura das pessoas com idade entre 10 e 20 anos: ", mediaAltura:0:2)
   Escreval("Porcentagem de pessoas com peso inferior a 40 quilos: ", pesoInf40:0:1, "%")

// Fim da execução
fimalgoritmo

// Faça um algoritmo que receba a idade, a altura e o peso de 25 pessoas.
// Calcule e mostre: 1. A quantidade de pessoas com idade superior a 50
// anos; 2. A média das alturas das pessoas com idade entre 10 e 20 anos;
// 3. A percentagem de pessoas com peso inferior a 40 quilos entre todas
// as pessoas analisadas