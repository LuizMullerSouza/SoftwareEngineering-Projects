algoritmo "PrecoPassagemAerea"

// Variáveis
var
   destino, modo: inteiro

// Início
inicio
   // Exibição do Menu (Destino)
   Escreval("Região Norte - Código 10")
   Escreval("Região Nordeste - Código 20")
   Escreval("Região Centro Oeste - Código 30")
   Escreval("Região Sul - Código 40")
   Escreva("Informe a região de destino pelo código correspondente: ")
   Leia(destino)
   Escreval

   // Exibição do Menu (Modo)
   Escreval("Apenas Ida - Código 1")
   Escreval("Ida e Volta - Código 2")
   Escreva("Informe o modo pelo código correspondente: ")
   Leia(modo)
   Escreval

   // Lógica condicional para saída de dados
   se ((destino = 10) e (modo = 1)) entao
      Escreval("Preço da Passagem: R$500,00")
   senao
      se ((destino = 10) e (modo = 2)) entao
         Escreval("Preço da Passagem: R$900,00")
      senao
         se ((destino = 20) e (modo = 1)) entao
            Escreval("Preço da Passagem: R$350,00")
         senao
            se ((destino = 20) e (modo = 2)) entao
               Escreval("Preço da Passagem: R$650,00")
            senao
               se ((destino = 30) e (modo = 1)) entao
                  Escreval("Preço da Passagem: R$350,00")
               senao
                  se ((destino = 30) e (modo = 2)) entao
                     Escreval("Preço da Passagem: R$600,00")
                  senao
                     se ((destino = 40) e (modo = 1)) entao
                        Escreval("Preço da Passagem: R$300,00")
                     senao
                        se ((destino = 40) e (modo = 2)) entao
                           Escreval("Preço da Passagem: R$550,00")
                        senao
                           Escreval("Erro: código(s) inválido(s)")
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

// Criar um algoritmo em PORTUGOL que leia o destino do passageiro,
// se a viagem inclui retorno (ida e volta) e informar o preço da
// passagem aérea conforme a tabela a seguir:
// Condição - Ida - Ida e Volta
// Região Norte - R$500,00 - R$900,00
// Região Nordeste - R$350,00 - R$650,00
// Região Centro Oeste - R$350,00 - R$600,00
// Região Sul - R$300,00 - R$550,00