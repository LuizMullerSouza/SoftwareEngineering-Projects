// Nomeação dos pinos
const int redPin = 3;
const int yellowPin = 4;
const int greenPin = 5;

// Função de configuração inicial
void setup() {

  // Configuração dos pinos digitais
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

  // Inicialização dos pinos
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);

}

// Função de repetição contínua
void loop() {

  // Sinal digital para o LED vermelho
  digitalWrite(redPin, HIGH);
  delay(8000);
  digitalWrite(redPin, LOW);

  // Sinal digital para o LED verde
  digitalWrite(greenPin, HIGH);
  delay(6000);
  digitalWrite(greenPin, LOW);

  // Sinal digital para o LED amarelo
  digitalWrite(yellowPin, HIGH);
  delay(2000);
  digitalWrite(yellowPin, LOW);

}