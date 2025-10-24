algoritmo "RaizOuQuadrado"

// Variáveis
var
   numero, resultado: real

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um valor: ")
   Leia(numero)

   // Lógica condicional para cálculo e saída de dados
   se (numero >= 0) entao
      resultado <- RaizQ(numero)
      Escreval("Raiz Quadrada: ", resultado:0:2)
   senao
      resultado <- numero ^ 2
      Escreval("Elevado ao Quadrado: ", resultado:0:2)
   fimse

// Fim da execução
fimalgoritmo

// Escreva um algoritmo em PORTUGOL que leia um
// número e imprima a raiz quadrada do número caso
// ele seja positivo ou igual a zero e o quadrado do
// número caso ele seja negativo.