// Nomeação dos pinos e variáveis
const int buttonPin = 2, ledPin = 7;
int i, count = 1;

// Função de configuração inicial
void setup() {

  // Configuração dos pinos digitais
  pinMode(buttonPin, INPUT); 
  pinMode(ledPin, OUTPUT);

  // Inicialização dos pinos
  digitalWrite(ledPin, LOW); 

}

// Função de repetição contínua
void loop() {

  // Lógica condicional para acionamento do botão
  if (digitalRead(buttonPin) == HIGH) {
    
    // Debounce
    while(digitalRead(buttonPin) == HIGH); 
    delay(50);

    // Laço de repetição para piscar o LED de acordo com o contador
    for(i = 1; i <= count; i++) {
      
      // Sinal digital para o LED acender
      digitalWrite(ledPin, HIGH);
      delay(500); 
      
      // Sinal digital para o LED apagar
      digitalWrite(ledPin, LOW);
      delay(500);
      
    }

    // Incremento do contador
    count++;
  }
}