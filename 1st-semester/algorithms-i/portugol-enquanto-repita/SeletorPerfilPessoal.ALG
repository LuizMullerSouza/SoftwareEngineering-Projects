algoritmo "SeletorPerfilPessoal"

// Variáveis
var
   idade, cabelo, totalM, totalF: inteiro
   sexo, continuar: caractere

// Início
inicio
   // Inicialização
   totalM <- 0
   totalF <- 0

   // Loop para processamento
   repita
      Escreval("==========================")
      Escreval("    SELETOR DE PESSOAS    ")
      Escreval("==========================")

      Escreva("Qual o Sexo? [M/F]: ")
      Leia(sexo)

      Escreva("Qual a idade? ")
      Leia(idade)

      Escreval("Qual a cor do Cabelo?")
      Escreval("[1] Preto")
      Escreval("[2] Castanho")
      Escreval("[3] Loiro")
      Escreval("[4] Ruivo")
      Escreva("Escolha uma opção: ")
      Leia(cabelo)

      // Lógica condicional para homens
      se (sexo = "M") e (idade > 18) e (cabelo = 2) entao
         totalM <- totalM + 1
      fimse

      // Lógica condicional para mulheres
      se (sexo = "F") e (cabelo = 3) e (idade >= 25) e (idade <= 30) entao
         totalF <- totalF + 1
      fimse

      Escreval
      Escreva("Quer continuar? [S/N] ")
      Leia(continuar)

      LimpaTela
   ate (continuar = "N")

   // Saída de dados
      Escreval("===========================")
      Escreval("      RESULTADO FINAL      ")
      Escreval("===========================")
   Escreval("Total de homens com mais de 18 anos e cabelos castanhos: ", totalM)
   Escreval("Total de mulheres entre 25 e 30 anos e cabelos loiros: ", totalF)

// Fim da execução
fimalgoritmo

// Desenvolver um algoritmo que realize o cadastro de diversas
// pessoas, lendo sexo, idade e cor de cabelo. Ao final, o programa
// deve apresentar o total de homens com mais de 18 anos e cabelos
// castanhos, e o total de mulheres entre 25 e 30 anos com cabelos
// loiros. O cadastro deve continuar até que o usuário decida parar.