algoritmo "CalculadorDeBhaskara"

// Variáveis
var
   a, b, c, raiz1, raiz2: real
   sucesso: logico

// Função
funcao calcularEquacao (a, b, c: real; var x1, x2: real): logico
var
   delta: real
   verificador: logico
inicio
   // Verificação lógica
   se (a = 0) entao
      verificador <- falso
   senao
      delta <- (b ^ 2) - (4 * a * c)

      // Verificação do delta
      se (delta < 0) entao
         Escreval("A equação não possui raízes reais, pois Delta é ", delta:0:2)
         verificador <- falso
      senao
         // Cálculo de bhaskara
         x1 <- (-b + RaizQ(delta)) / (2 * a)
         x2 <- (-b - RaizQ(delta)) / (2 * a)
         verificador <- verdadeiro
      fimse
   fimse

   // Retorna verificador
   retorne verificador
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o valor de A: ")
   Leia(a)
   Escreva("Informe o valor de B: ")
   Leia(b)
   Escreva("Informe o valor de C: ")
   Leia(c)
   Escreval

   // Chamada da função
   sucesso <- calcularEquacao(a, b, c, raiz1, raiz2)

   // Saída de dados
   se (sucesso = verdadeiro) entao
      Escreval("Cálculo realizado com sucesso!")
      Escreval("Raiz X1: ", raiz1:0:2)
      Escreval("Raiz X2: ", raiz2:0:2)
   senao
      Escreval("Não foi possível calcular as raízes.")
   fimse

// Fim da execução
fimalgoritmo

// Faça uma função que recebe por parâmetro os valores necessários
// para o cálculo de uma equação de segundo grau. A função deve retornar
// verdadeiro caso for possível calcular as raízes e falso caso não seja
// possível. A função também deve retorna por parâmetro, as suas raízes,
// caso foi possível realizar o cálculo.