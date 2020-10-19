void setup() {
  for (int thisLed = 0; thisLed < ledCount; thisLed++) { //Laço de repetição para os 9 LEDS definidos
    pinMode(ledPins[thisLed], OUTPUT); // Definir os pinos LEDS com saida
  }
}
