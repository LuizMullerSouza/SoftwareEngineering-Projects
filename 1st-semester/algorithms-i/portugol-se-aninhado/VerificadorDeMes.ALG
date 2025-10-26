algoritmo "VerificadorDeMes"

// Variáveis
var
   mes: inteiro

// Início
inicio
   // Entrada e leitura de dados
   Escreva("Informe o mês (1 a 12): ")
   Leia(mes)

   // Lógica condicional para saída de dados
   se ((mes < 1) ou (mes > 12)) entao
      Escreval("Erro: mês inválido")
   senao
      se (mes = 1) entao
         Escreval("Mês: Janeiro")
      senao
         se (mes = 2) entao
            Escreval("Mês: Fevereiro")
         senao
            se (mes = 3) entao
               Escreval("Mês: Março")
            senao
               se (mes = 4) entao
                  Escreval("Mês: Abril")
               senao
                  se (mes = 5) entao
                     Escreval("Mês: Maio")
                  senao
                     se (mes = 6) entao
                        Escreval("Mês: Junho")
                     senao
                        se (mes = 7) entao
                           Escreval("Mês: Julho")
                        senao
                           se (mes = 8) entao
                              Escreval("Mês: Agosto")
                           senao
                              se (mes = 9) entao
                                 Escreval("Mês: Setembro")
                              senao
                                 se (mes = 10) entao
                                    Escreval("Mês: Outubro")
                                 senao
                                    se (mes = 11) entao
                                       Escreval("Mês: Novembro")
                                    senao
                                       Escreval("Mês: Dezembro")
                                    fimse
                                 fimse
                              fimse
                           fimse
                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse

// Fim da execução
fimalgoritmo

// Criar um algoritmo em PORTUGOL que leia um número inteiro
// entre 1 e 12 e escrever o mês correspondente. Caso o usuário
// digite um número fora desse intervalo, deverá aparecer uma
// mensagem informando que não existe mês com este número.