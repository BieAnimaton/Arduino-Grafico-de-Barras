// Cria um grafico de barras com LEDS com base no valor fornecido pelo potenciometro

const int analogPin = A0; // Pino conectado ao potenciometro
const int ledCount = 9; // Número máximo de LEDS
int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10}; // Pinos conectados aos LEDS --> Array de LEDS
