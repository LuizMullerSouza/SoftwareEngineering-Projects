algoritmo "ClassificadorNatacao"

// Variáveis
var
   idade: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe a idade do nadador: ")
   Leia(idade)

   // Lógica condicional para saída de dados
   se (idade > 18) entao
      Escreval("Categoria: Sênior")
   senao
      se ((idade >= 14) e (idade <= 17)) entao
         Escreval("Categoria: Juvenil B")
      senao
         se ((idade >= 11) e (idade <= 13)) entao
            Escreval("Categoria: Juvenil A")
         senao
            se ((idade >= 8) e (idade <= 10)) entao
               Escreval("Categoria: Infantil B")
            senao
               se ((idade >= 5) e (idade <= 7)) entao
                  Escreval("Categoria: Infantil A")
               senao
                  Escreval("Idade inválida: nenhuma categoria disponível")
               fimse
            fimse
         fimse
      fimse
   fimse

// Fim da execução
fimalgoritmo

// A confederação brasileira de natação irá promover eliminatórias
// para o próximo mundial. Fazer um algoritmo em PORTUGOL que
// receba a idade de um nadador e determine (imprima) a sua categoria
// segundo a tabela a seguir:
// Infantil A - 5 a 7 anos
// Infantil B - 8 a 10 anos
// Juvenil A - 11 a 13 anos
// Juvenil B - 14 a 17 anos
// Sênior - Maiores de 18 anos