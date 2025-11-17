algoritmo "ConverterIdadeParaDias"

// Variáveis
var
   anos, meses, dias, totalDias: inteiro

// Função
funcao somarDias (dias, meses, anos: inteiro): inteiro
var
   somador: inteiro
inicio
   // Processamento
   somador <- (anos * 365) + (meses * 30) + dias

   // Retorno do somador
   retorne somador
fimfuncao

// Início
inicio
   // Entrada e leitura de dados
   Escreval("Informe a idade da pessoa:")
   Escreva("Anos: ")
   Leia(anos)
   Escreva("Meses: ")
   Leia(meses)
   Escreva("Dias: ")
   Leia(dias)
   Escreval

   // Chamada da função
   totalDias <- somarDias(dias, meses, anos)

   // Saída de dados
   Escreval("A idade total em dias é: ", totalDias, " dias.")

// Fim da execução
fimalgoritmo

// Faça uma função que recebe a idade de uma pessoa em
// anos, meses e dias e retorna essa idade expressa
// somente em dias.