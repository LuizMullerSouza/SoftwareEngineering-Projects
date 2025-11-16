algoritmo "ConsultaVeiculos"

// Registro
Tipo info = Registro
   nome: caractere
   placa: caractere
   modelo: caractere
   ano: inteiro
FimRegistro

// Variáveis
var
   veiculo: vetor [1..80] de info
   verifier: caractere
   i, flag: inteiro

// Início
inicio
   // Inicialização
   flag <- 0

   // Loop para cadastro
   Escreval("--- Cadastro de 80 Veículos ---")
   para i <- 1 ate 80 passo 1 faca
      Escreval("Cadastro do ", i, "° Carro")
      Escreva("Informe o nome: ")
      Leia(veiculo[i].nome)
      Escreva("Informe a placa: ")
      Leia(veiculo[i].placa)
      Escreva("Informe o modelo: ")
      Leia(veiculo[i].modelo)
      Escreva("Informe o ano de fabricação: ")
      Leia(veiculo[i].ano)
      Escreval("")
   fimpara

   // Loop para listagem
   Escreval("====================================")
   Escreval("        Listagem de Veículos        ")
   Escreval("====================================")
   Escreval("")
   para i <- 1 ate 80 passo 1 faca
      Escreval("Veículo ", i)
      Escreval("  Placa: ", veiculo[i].placa)
      Escreval("  Modelo: ", veiculo[i].modelo)
      Escreval("")
   fimpara

   Escreval("====================================")
   Escreval("")

   // Loop para consulta
   repita
      Escreva("Informe uma placa para pesquisa: ")
      Leia(verifier)

      para i <- 1 ate 80 passo 1 faca
         se (flag = 0) entao
            // Lógica condicional para busca
            se (veiculo[i].placa = verifier) entao
               Escreval("")
               Escreval("--- Informações do Carro Encontrado ---")
               Escreval("Nome: ", veiculo[i].nome)
               Escreval("Placa: ", veiculo[i].placa)
               Escreval("Modelo: ", veiculo[i].modelo)
               Escreval("Ano: ", veiculo[i].ano)
               flag <- 1
            fimse
         fimse
      fimpara

      // Verificação lógica
      se (flag = 0) entao
         Escreval("Erro: a placa informada não foi encontrada. Tente novamente.")
         Escreval("")
      fimse
   ate (flag = 1)

// Fim da execução
fimalgoritmo

// Escrever um algoritmo que cadastre o nome, a placa, o modelo e o ano de
// fabricação de 80 veículos. Em seguida: Imprima uma lista com a placa e o
// modelo de todos os veículos cadastrados. Por último, permita que o usuário
// consulte todos os dados de um veículo através da placa.