algoritmo "CalculaValorAoCubo"

// Variáveis
var
   num, res: real

// Função
funcao cubo (valor: real): real
var
   resultado: real
inicio
   // Processamento
   resultado <- valor ^ 3

   // Retorno do resultado
   retorne resultado
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe um valor para elevar ao cubo: ")
   Leia(num)

   // Chamada da função
   res <- cubo(num)

   // Saída de dados
   Escreval("O cubo de ", num, " é: ", res)

// Fim da execução
fimalgoritmo

// Faça uma função que
// eleve um valor ao cubo;