/**
 *  * @file portao_condominio.ino
  * @brief Controle de sinalização de um portão de condomínio.
   * @author Samuel da Cruz Adami
    * @date 30/10/2026
     * @version 1.0.0
      *
       * @section HARDWARE
        * Arduino Uno, dois botões, um LED verde e um LED vermelho.
         *
          * @section DESCRIPTION
           * O botão 1 acende o LED verde e apaga o vermelho.
            * O botão 2 acende o LED vermelho e apaga o verde.
             * Inicialmente, o LED vermelho permanece ligado.
              */
 */


#define ledVerde 13
#define ledVermelho 2
#define BTN1 4
#define BTN2 12


void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);

  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledVerde, LOW);
  
}

void loop()
{
  int estado_btn1 = digitalRead(BTN1);
  int estado_btn2 = digitalRead(BTN2);
  
  
  if(estado_btn1 == LOW){
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
    
  } 
  
    if(estado_btn2 == LOW){
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledVermelho, HIGH);
  }
}