const int botao1Pino = 6;
const int botao2Pino = 4;
const int ledPino = 3;

void setup() {
  
  pinMode(botao1Pino, INPUT);
  pinMode(botao2Pino, INPUT);

  
  pinMode(ledPino, OUTPUT);
}

void loop() {
 
  bool estadoBotao1 = digitalRead(botao1Pino);
  bool estadoBotao2 = digitalRead(botao2Pino);

  // Verificação do estado dos botões
  if (estadoBotao1 == HIGH && estadoBotao2 == LOW) {
    digitalWrite(ledPino, HIGH); // Liga o LED
  } else if (estadoBotao1 == LOW && estadoBotao2 == HIGH) {
    digitalWrite(ledPino, LOW); // Desliga o LED
  } else if (estadoBotao1 == HIGH && estadoBotao2 == HIGH) {
    // Ambos os botões pressionados
    while (digitalRead(botao1Pino) == HIGH && digitalRead(botao2Pino) == HIGH) {
      digitalWrite(ledPino, HIGH); // Liga o LED
      delay(500); // Atraso de meio segundo
      digitalWrite(ledPino, LOW); // Desliga o LED
      delay(500); // Atraso de meio segundo
    }
  }
}
