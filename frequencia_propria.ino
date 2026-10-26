/*
---------------------------------------------------------------------------------
    Autores: Gabriel Amaral & Samuel Da cruz 
    Atividade: Efeito Acumulo com LEDs

    Descrição:
    Um sistema em arduino em que ele faz com que os leds das pontas acendam para depois ligar 
    os dois do meio e depois apaga todos ligam os do meio de novo e depois liga os dois da ponta

    Funcionamento:
    O programa liga um led de uma ponta e liga tambem o da outra ponta e depois os desliga
    e liga os dois do meio e depois desliga os do meio depois os acende novamente e dai que 
    ele liga os das pontas
---------------------------------------------------------------------------------
*/
#define LEDVERDE 7
#define LEDVERMELHO 2
#define LEDAMARELO 4
#define LEDBRANCO 1
void setup()
{
  pinMode(LEDBRANCO, OUTPUT);
  pinMode(LEDVERMELHO, OUTPUT);
  pinMode(LEDAMARELO, OUTPUT);
  pinMode(LEDVERDE, OUTPUT);
}

void loop()
{
  digitalWrite(LEDBRANCO, 1);
  digitalWrite(LEDVERDE, 1);
  delay(1000); 
  digitalWrite(LEDBRANCO, 0);
  digitalWrite(LEDVERDE, 0);
  delay(1000); 
  
  digitalWrite(LEDAMARELO, 1);
  digitalWrite(LEDVERMELHO, 1);
  delay(1000); 
  digitalWrite(LEDAMARELO, 0);
  digitalWrite(LEDVERMELHO, 0);
  delay(1000); 
  
  digitalWrite(LEDAMARELO, 1);
  digitalWrite(LEDVERMELHO, 1);
  delay(1000); 
  digitalWrite(LEDAMARELO, 0);
  digitalWrite(LEDVERMELHO, 0);
  delay(1000); 
  
  digitalWrite(LEDBRANCO, 1);
  digitalWrite(LEDVERDE, 1);
  delay(1000); 
  digitalWrite(LEDBRANCO, 0);
  digitalWrite(LEDVERDE, 0);
  delay(1000); 
}