algoritmo "ImpressoraDeMensagens"

// Variáveis
var
   mensagem: caractere

// Procedimento
procedimento exibirMensagem (msg: caractere)
inicio
   // Saída de dados
   Escreval("Mensagem formatada: ", msg, "!")
fimprocedimento

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe uma mensagem: ")
   Leia(mensagem)

   // Chamada do procedimento
   exibirMensagem(mensagem)

   Escreval

   // Entrada e leitura de dados
   Escreva("Informe outra mensagem: ")
   Leia(mensagem)

   // Chamada do procedimento
   exibirMensagem(mensagem)

// Fim da execução
fimalgoritmo

// Crie um algoritmo em Portugol que defina um
// procedimento chamado exibirMensagem. Este
// procedimento deve receber uma Literal como
// parâmetro e exibir essa literal na tela, seguida
// de um ponto de exclamação. No programa principal,
// chame este procedimento duas vezes, passando
// mensagens diferentes.