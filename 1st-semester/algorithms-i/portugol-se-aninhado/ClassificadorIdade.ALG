algoritmo "ClassificadorIdade"

// Variáveis
var
   idade: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe sua idade: ")
   Leia(idade)

   // Lógica condicional para saída de dados
   se (idade >= 65) entao
      Escreval("Pessoa Idosa")
   senao
      se (idade >= 18) entao
         Escreval("Maior de Idade")
      senao
         Escreval("Menor de Idade")
      fimse
   fimse

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL
// que dada a idade de uma pessoa, determine
// sua classificação conforme segue:
// - maior de idade (Maior de 18 anos);
// - menor de idade (Menor de 18 anos);
// - pessoa idosa (idade superior ou igual a 65 anos).