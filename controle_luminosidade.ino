 /**
 *---------------------------------------------------------------
- @file    controle_luminosidade
- @brief   Controle de LED com base na luminosidade usando sensor LDR
- @author  Samuel da Cruz Adami
- @date    23/11/2026
- @version 1.0.0
 *---------------------------------------------------------------
- @section HARDWARE - (Informar os componentes utilizados)
- - Microcontrolador: Arduino Uno
- - Entradas:
-     Sensor LDR - pino analógico A1 (Leitura de luminosidade)
- - Saídas:
-     LED Vermelho - pino 8 (Ativo em Nível Lógico Alto)
 *---------------------------------------------------------------
- @section DESCRIPTION
- 1. Define o pino do LED Vermelho como saída e inicializa a Serial (setup)
- 2. Lê continuamente o valor analógico do sensor LDR (loop)
- 3. Exibe o valor da leitura do LDR no Monitor Serial
- 4. Se a luminosidade for baixa (valor menor que 400), acende o LED vermelho
- 5. Caso contrário, mantém o LED vermelho apagado
- Mapeamento Lógico:
- - Luminosidade Baixa (< 400) -> LED LIGADO (HIGH)
- - Luminosidade Alta (>= 400) -> LED DESLIGADO (LOW)
 *---------------------------------------------------------------
*/

// C++ code
//

// Define o pino analógico conectado ao sensor LDR
#define pinoLDR A0

// Define o pino digital conectado ao LED vermelho
#define LEDVERMELHO 13

void setup()
{
  // Configura o LED vermelho como saída
  pinMode(LEDVERMELHO, OUTPUT);

  // Inicializa a comunicação serial com velocidade de 9600 bits por segundo
  Serial.begin(9600);
}

void loop()
{
  // Realiza a leitura do valor de luminosidade recebido pelo sensor LDR
  int valorLDR = analogRead(pinoLDR);

  // Exibe o valor lido pelo sensor no Monitor Serial
  Serial.println(valorLDR);

  // Verifica se o valor do sensor LDR é menor que 400
  if(valorLDR < 400 ){
    // Acende o LED vermelho
    digitalWrite(LEDVERMELHO, 1);
  }
   else{
      // Apaga o LED vermelho
      digitalWrite(LEDVERMELHO, 0);
   }
}