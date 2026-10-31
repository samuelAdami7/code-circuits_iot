/**
 *
 * @file portao_automatico_temporizado.ino
 * @brief Sinalizador e Controlo de Acesso a Portão Automático
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
 * - O sistema inicia com o LED Vermelho LIGADO e o LED Verde DESLIGADO.
 * - Ao pressionar o Botão 1 (BTN1), o LED Vermelho desliga e o LED Verde liga.
 * - Ao pressionar o Botão 2 (BTN2), o LED Verde desliga e o LED Vermelho liga.
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

  // Define o estado inicial dos LEDs
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledVerde, LOW);
}

void loop()
{
  // Lê o estado dos botões
  int estado_btn1 = digitalRead(BTN1);
  int estado_btn2 = digitalRead(BTN2);

  // Acende o verde e apaga o vermelho se o Botão 1 for pressionado
  if (estado_btn1 == LOW) {
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
  }

  // Acende o vermelho e apaga o verde se o Botão 2 for pressionado
  if (estado_btn2 == LOW) {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVermelho, HIGH);
  }
}