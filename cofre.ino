/**
 *---------------------------------------------------------------
- @file    led_buzzer
- @brief   Controle de LED e Buzzer com base na luminosidade usando sensor LDR
- @author  Samuel Henrique
- @date    23/11/2026
- @version 1.0.0
 *---------------------------------------------------------------
- @section HARDWARE - (Informar os componentes utilizados)
- - Microcontrolador: Arduino Uno
- - Entradas:
-     Sensor LDR - pino analógico A1 (Leitura de luminosidade)
- - Saídas:
-     LED Vermelho - pino 8 (Ativo em Nível Lógico Alto)
-     Buzzer - pino 9 (Emissão de som / PWM)
 *---------------------------------------------------------------
- @section DESCRIPTION
- 1. Define os pinos do LED e do Buzzer como saída e inicializa a Serial (setup)
- 2. Lê continuamente o valor analógico do sensor LDR (loop)
- 3. Exibe o valor da leitura do LDR no Monitor Serial
- 4. Se a luminosidade for baixa (valor menor que 400), acende o LED vermelho e emite som no buzzer por 500 ms
- 5. Caso contrário, mantém o LED vermelho apagado
- Mapeamento Lógico:
- - Luminosidade Baixa (< 400) -> LED LIGADO (HIGH) e Buzzer Ativo
- - Luminosidade Alta (>= 400) -> LED DESLIGADO (LOW)
 *---------------------------------------------------------------
*/

// C++ code
//

// Define os pinos utilizados no Arduino
#define pinoLDR A0          // Pino analógico conectado ao sensor LDR
#define LEDVERMELHO 13      // Pino digital conectado ao LED vermelho
#define BUZZER 9            // Pino digital conectado ao buzzer

void setup()
{
  // Configura o LED vermelho como saída
  pinMode(LEDVERMELHO, OUTPUT);

  // Configura o buzzer como saída
  pinMode(BUZZER, OUTPUT);

  // Inicializa a comunicação serial com velocidade de 9600 bits por segundo
  Serial.begin(9600);
}

void loop()
{
  // Realiza a leitura da luminosidade captada pelo sensor LDR
  int valorLDR = analogRead(pinoLDR);

  // Exibe o valor lido pelo sensor no Monitor Serial
  Serial.println(valorLDR);

  // Verifica se o valor do LDR é menor que 400 (ambiente escuro)
  if(valorLDR < 400 ){

    // Acende o LED vermelho
    digitalWrite(LEDVERMELHO, 1);

    // Ativa o buzzer com frequência de 1550 Hz durante 500 milissegundos
    tone(BUZZER, 1550 , 500);

    // Aguarda 1 segundo antes de realizar uma nova leitura
    delay(1000);
  }
   else{

      // Apaga o LED vermelho quando a luminosidade não atende à condição
      digitalWrite(LEDVERMELHO, 0);
   }
}