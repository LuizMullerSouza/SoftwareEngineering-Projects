// Nomeação dos pinos
const int ldrPin = A4, ledPin = 13;

// Função de configuração inicial
void setup() {

  // Configuração do pino analógico como entrada e do pino digital como saída
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

// Função de repetição contínua
void loop() {

  // Leitura analógica se o valor é menor ou igual a 40%
  if(analogRead(ldrPin) <= 409) {
    
    // Sinal digital para o LED acender
    digitalWrite(ledPin, HIGH);
    
  } else {
    
    // Sinal digital para o LED apagar
    digitalWrite(ledPin, LOW);
    
  }

}