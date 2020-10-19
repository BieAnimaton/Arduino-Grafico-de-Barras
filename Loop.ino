void loop() {
  int sensorReading = analogRead(analogPin); // Entrada analogica
  int ledLevel = map(sensorReading, 0, 1023, 0, ledCount); // Converte, atraves do comando map, os valores de 0 a 1023 para 0 até 9 (quantidade de LEDS)
  for (int thisLed = 0; thisLed < ledCount; thisLed++) { // Laço de repetição para os 9 LEDS definidos
    if (thisLed < ledLevel) { // Condicão para verificar se o thisLed é menor que 9, acendendo a sequencia especifica
      digitalWrite(ledPins[thisLed], HIGH); // Acende os LEDS em sequencia especifica, definida pelo Array
    } else {
      digitalWrite(ledPins[thisLed], LOW); // Apaga os LEDS em sequencia especifica, definida pelo Array
    }
  }
}
