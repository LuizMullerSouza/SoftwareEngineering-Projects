algoritmo "VerificadorDivisivelTresSete"

// Variáveis
var
   numero: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um valor inteiro: ")
   Leia(numero)

   // Lógica condicional para saída de dados
   se ((numero mod 3 = 0) e (numero mod 7 = 0)) entao
      Escreval("Seu número é divisível por 3 e por 7")
   senao
      Escreval("Seu número não é divisível por 3 e por 7")
   fimse

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL que leia um
// número e informe se ele é divisível por 3 e por 7.