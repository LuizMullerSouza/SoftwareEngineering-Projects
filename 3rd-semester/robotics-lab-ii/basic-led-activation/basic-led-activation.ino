// Nomeação do pino
const int ledPin = 3; 

// Função de configuração inicial
void setup() {
    
  // Configuração do pino digital como uma saída de energia
  pinMode(ledPin, OUTPUT);
    
}

// Função de repetição contínua
void loop() {
    
  // Escrevendo um sinal digital no pino configurado
  digitalWrite(ledPin, HIGH);
    
}