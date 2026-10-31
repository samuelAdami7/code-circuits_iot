/**
 *
 * @file catraca_acesso_com_panico.ino
 * @brief Sinalizador e Controle de Catraca de Acesso com Alarme de Pânico
 * @author Samuel da Cruz Adami
 * @date 30/10/2026
 * @version 1.0.0
 *==============================================================================
 * @section HARDWARE - (Informar os componentes utilizados)
 * - Microcontrolador: Arduino Uno
 * - Entradas:
 *   Botão Push-Button (Ativo em Nível Lógico Baixo / Pull-Up Interno)
 * - Saídas:
 *   LED Indicador (Ativo em Nível Lógico Alto)
 *==============================================================================
 * @section DESCRIPTION
 * Descrição em etapas do que foi realizado:
 * - O sistema inicia com o LED Verde DESLIGADO.
 * - Ao pressionar o Botão 1 (BTN1), desliga o LED Vermelho, liga o LED Verde por 2 segundos e depois desliga o Verde.
 * - Ao pressionar o Botão 2 (BTN2), liga o LED Vermelho, desliga o LED Verde, aguarda 2 segundos e desliga o Verde.
 * - Se ambos os botões forem pressionados simultaneamente, os dois LEDs piscam juntos 4 vezes (500ms ligados / 500ms desligados).
 * 
 * Mapeamento Lógico:
 * - Botão Pressionado (GND) -> Entrada LOW -> LED LIGADO (HIGH)
 * - Botão Solto (Aberto) -> Entrada HIGH -> LED DESLIGADO (LOW)
 *==============================================================================
 */

// Define os pinos dos componentes
#define ledVerde 13
#define ledVermelho 2
#define BTN1 4
#define BTN2 12

void setup()
{
  // Configura os pinos dos LEDs como saída
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  
  // Configura os botões como entrada com pull-up
  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);

  // Define o estado inicial dos LEDs (verde apagado)
  digitalWrite(ledVerde, LOW);
}

void loop()
{
  // Lê o estado atual dos botões
  int estado_btn1 = digitalRead(BTN1);
  int estado_btn2 = digitalRead(BTN2);

  // Se o Botão 1 for pressionado: acende o verde, apaga o vermelho, espera 2s e apaga o verde
  if(estado_btn1 == LOW){
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
    delay(2000);
    digitalWrite(ledVerde, LOW);
  }

  // Se o Botão 2 for pressionado: acende o vermelho, apaga o verde, espera 2s e apaga o verde
  if(estado_btn2 == LOW){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    delay(2000);
    digitalWrite(ledVerde, LOW);
  }

  // Se ambos os botões forem pressionados ao mesmo tempo, faz os dois LEDs piscarem 4 vezes
  for(int i = 0; i < 4; i++)
  {
    if(estado_btn1 == LOW && estado_btn2 == LOW){
      digitalWrite(ledVerde, HIGH);
      digitalWrite(ledVermelho, HIGH);
      delay(500);
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledVermelho, LOW);
      delay(500);
    }
  }
}